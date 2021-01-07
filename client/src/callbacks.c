#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <gtk/gtk.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "client.h"
#include <string.h>
#include <stdio.h>
void on_btn_modify_clicked(GtkWidget *button, gpointer user_data)
{

    GtkWidget *modify;
    modify=create_modifier();
    gtk_widget_show(modify);

	
}

void on_btn_search_clicked(GtkWidget *button, gpointer user_data)
{
GtkWidget *search;
    search=create_windowrecherche();
    gtk_widget_show(search);
}

void on_btn_inscrit_clicked(GtkWidget *button, gpointer user_data)
{
    GtkWidget *inscrit;
    inscrit=create_ajouter();
    gtk_widget_show(inscrit);
}



void on_btn_delete_clicked(GtkWidget *button, gpointer user_data)
{
    GtkWidget *delete;
    delete=create_supprimer();
    gtk_widget_show(delete);
}

void on_btn_ajouter_clicked(GtkWidget *objet_graphique, gpointer user_data)
{/*GtkWidget *menu;
	GtkWidget *treeviewmenu;
	menu=lookup_widget(objet_graphique,"menu");
	gtk_widget_destroy(menu);*/
    GtkWidget *Combobox1;
	GtkWidget *idc,*nomc,*prenomc,*date_naissancec,*emailc,*telc;
	GtkWidget *ajouter;
	ajouter=lookup_widget(objet_graphique,"ajouter");
    C c;
	FILE *f;
    f=fopen("client.txt","a+");
    idc = lookup_widget(objet_graphique, "input_id");
    strcpy(c.id,gtk_entry_get_text(GTK_ENTRY(idc)));
    nomc = lookup_widget(objet_graphique, "input_nom");
    strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(nomc)));
    prenomc = lookup_widget(objet_graphique, "input_prenom");
    strcpy(c.prenom,gtk_entry_get_text(GTK_ENTRY(prenomc)));
    date_naissancec = lookup_widget(objet_graphique, "input_dtn");
    strcpy(c.date_naissance,gtk_entry_get_text(GTK_ENTRY(date_naissancec)));
    
    emailc = lookup_widget(objet_graphique, "input_email");
    strcpy(c.email,gtk_entry_get_text(GTK_ENTRY(emailc)));
    telc = lookup_widget(objet_graphique, "input_tel");
    strcpy(c.tel,gtk_entry_get_text(GTK_ENTRY(telc)));


	inscription_client(c);
	
GtkWidget *inscrit;
	inscrit=lookup_widget(objet_graphique,"ajouter");
	gtk_widget_destroy(inscrit);
/*GtkWidget *menu;
	GtkWidget *treeviewmenu;
	menu=lookup_widget(objet_graphique,"menu");
	gtk_widget_destroy(menu);
	menu=lookup_widget(objet_graphique,"menu");
	menu=create_menu();
	gtk_widget_show(menu);
	treeviewmenu=lookup_widget(menu,"treeviewmenu");
	Affichage_client(treeviewmenu,"client.txt");*/
	

}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
	gchar* id;
	gchar* nom;
	gchar* prenom;
	gchar* date_naissance;
	gchar* email;
	gchar* tel;
	//gchar* poste;
	
	C c;
	GtkTreeModel *model = gtk_tree_view_get_model(treeview);
	if(gtk_tree_model_get_iter(model,&iter,path))
	{
		gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,1,&nom,2,&prenom,3,&date_naissance,4,&email,5,&tel,-1);
		
		strcpy(c.id,id);
		strcpy(c.nom,nom);
		strcpy(c.prenom,prenom);
		strcpy(c.date_naissance,date_naissance);
		strcpy(c.email,email);
		strcpy(c.tel,tel);
		//strcpy(e.poste,poste);
		supprimer_client(c);
		Affichage_client(treeview,"client.txt");

	}
}


void
on_btn_back_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *menu;
    menu=create_menu ();
    gtk_widget_show(menu);
}





void
on_btn_mod_modifier_clicked            (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	FILE *f,f1;
	GtkWidget *id,*nom,*prenom,*email,*tel;
	GtkWidget *window2_modifier;
	char id1[10];
	C c,c1;
	window2_modifier=lookup_widget(objet_graphique,"modifier");
	id=lookup_widget(objet_graphique,"input_mod_id");
	strcpy(id1,gtk_entry_get_text(GTK_ENTRY(id)));
	f=fopen("client.txt","r");
	while(!feof(f))
	{
		fscanf(f,"%s  %s %s  %s  %s  %s  \n ", c.id, c.nom, c.prenom, c.date_naissance, c.email, c.tel);
	
		if(strcmp(c.id,id1)==0)
		{
			strcpy(c1.id,c.id);
			strcpy(c1.date_naissance,c.date_naissance);
			//strcpy(e1.password,e.password);
			//strcpy(c1.poste,c.poste);	
			supprimer1(id1);
			//modifier(e1,id1);
		}
	}
	
	id=lookup_widget(objet_graphique,"input_mod_id");
	nom=lookup_widget(objet_graphique,"input_mod_nom");
	prenom=lookup_widget(objet_graphique,"input_mod_prenom");
	email=lookup_widget(objet_graphique,"input_mod_email");
	tel=lookup_widget(objet_graphique,"input_mod_tel");
	strcpy(c1.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
	strcpy(c1.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
	strcpy(c1.email,gtk_entry_get_text(GTK_ENTRY(email)));
	strcpy(c1.tel,gtk_entry_get_text(GTK_ENTRY(tel)));

	inscription_client(c1);
	fclose(f);
}


void
on_treeviewmenu_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
        GtkTreeIter iter;
	gchar* id;
	gchar* nom;
	gchar* prenom;
	gchar* date_naissance;
	gchar* email;
	gchar* tel;
	//gchar* poste;
	
	C c,c1;
	GtkTreeModel *model = gtk_tree_view_get_model(treeview);
	if(gtk_tree_model_get_iter(model,&iter,path))
	{
		gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,1,&nom,2,&prenom,3,&date_naissance,4,&email,5,&tel,-1);
		
		strcpy(c.id,id);
		strcpy(c.nom,nom);
		strcpy(c.prenom,prenom);
		strcpy(c.date_naissance,date_naissance);
		strcpy(c.email,email);
		strcpy(c.tel,tel);
		//strcpy(e.poste,poste);
		supprimer_client(c);
	
	/*FILE *f, *ftmp;
	f = fopen("client.txt", "r");
	ftmp = fopen("tmp.txt", "w");
	
	while (!feof(f))
	{
		fscanf(f, "%s  %s %s  %s  %s  %s  %s %s\n ", e.id, e.nom, e.prenom, e.date_naissance, e.password, e.email, e.tel, e.poste);
		if (strcmp(e1.id,e.id)!=0)
			fprintf(ftmp, "%s  %s %s  %s  %s  %s  %s %s\n ", e.id, e.nom, e.prenom, e.date_naissance, e.password, e.email, e.tel, e.poste);
	}
	fclose(ftmp);
	fclose(f);
	remove("client.txt");
	rename("tmp.txt", "client.txt");*/

		Affichage_client(treeview,"client.txt");
		 GtkWidget *delete;
    delete=create_supprimer();
    gtk_widget_show(delete);
	}
}





void
on_actualiser_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *menu;
	GtkWidget *treeviewmenu;
	menu=lookup_widget(objet,"menu");
	gtk_widget_destroy(menu);
	menu=lookup_widget(objet,"menu");
	menu=create_menu();
	gtk_widget_show(menu);
	treeviewmenu=lookup_widget(menu,"treeviewmenu");
	Affichage_client(treeviewmenu,"client.txt");

}


void
on_back_fonction_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *delete;
    delete=lookup_widget(objet,"supprimer");
    gtk_widget_destroy(delete);

}


/*void
on_result_search_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/

void
on_result_search_final_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
FILE *f2;
	gchar ch[90]="",ch1[100],ch2[100],ch3[100],ch4[100],ch6[100],ch7[100];
	C c,c1;	
	GtkWidget *id;
	GtkWidget *label;
	GtkWidget *window5_chercher;
	char id1[15];
	id=lookup_widget(objet_graphique,"input_search_final");
	strcpy(id1,gtk_entry_get_text(GTK_ENTRY(id)));
	label=lookup_widget(objet_graphique,"result_search");
	recherche_client(id1);
	f2=fopen("tempo.txt","r");
	while(!feof(f2))
		{
			fscanf(f2, "%s  %s  %s  %s  %s %s\n ", c1.id, c1.nom, c1.prenom, c1.date_naissance, c1.email, c1.tel);
		}
	strcpy(ch1,c1.id);
	strcpy(ch2,c1.nom);
	strcpy(ch3,c1.prenom);
	strcpy(ch4,c1.date_naissance);
	strcpy(ch6,c1.email);
	strcpy(ch7,c1.tel);
	strcat(ch,ch1);
	strcat(ch," ");
	strcat(ch,ch2);
	strcat(ch," ");
	strcat(ch,ch3);
	strcat(ch," ");
	strcat(ch,ch4);
	//strcat(ch," ");
	//strcat(ch,ch5);
	strcat(ch," ");
	strcat(ch,ch6);
	strcat(ch," ");
	strcat(ch,ch7);
	//strcat(ch," ");
	//strcat(ch,ch8);

//strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(ch,ch1),ch2),ch3),ch4),ch5),ch6),ch7),ch8);
	gtk_label_set_text(GTK_LABEL(label),ch);
	fclose(f2);
	
}


void
on_back_ajo_btn_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *ajo;
ajo=lookup_widget(objet_graphique,"ajouter");
	
    gtk_widget_destroy(ajo);

}


void
on_back_from_search_clicked            (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *se;
se=lookup_widget(objet_graphique,"windowrecherche");
	
    gtk_widget_destroy(se);
}


void
on_back_modify_btn_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mod;
mod=lookup_widget(objet_graphique,"modifier");
	
    gtk_widget_destroy(mod);
}

