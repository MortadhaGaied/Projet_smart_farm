#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <gtk/gtk.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "employer.h"
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

void on_btn_absence_clicked(GtkWidget *button, gpointer user_data)
{
    GtkWidget *abs;
    abs=create_absance();
    gtk_widget_show(abs);
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
	GtkWidget *id,*nom,*prenom,*date_naissance,*password,*email,*tel,*poste;
	GtkWidget *ajouter;
	ajouter=lookup_widget(objet_graphique,"ajouter");
    E e;
	FILE *f;
    f=fopen("employer.txt","a+");
    id = lookup_widget(objet_graphique, "input_id");
    strcpy(e.id,gtk_entry_get_text(GTK_ENTRY(id)));
    nom = lookup_widget(objet_graphique, "input_nom");
    strcpy(e.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
    prenom = lookup_widget(objet_graphique, "input_prenom");
    strcpy(e.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
    date_naissance = lookup_widget(objet_graphique, "input_dtn");
    strcpy(e.date_naissance,gtk_entry_get_text(GTK_ENTRY(date_naissance)));
    password = lookup_widget(objet_graphique, "input_email");
    strcpy(e.password,gtk_entry_get_text(GTK_ENTRY(password)));
    email = lookup_widget(objet_graphique, "input_email");
    strcpy(e.email,gtk_entry_get_text(GTK_ENTRY(email)));
    tel = lookup_widget(objet_graphique, "input_tel");
    strcpy(e.tel,gtk_entry_get_text(GTK_ENTRY(tel)));

Combobox1=lookup_widget (objet_graphique,"input_poste");
if(strcmp("Agricole des equipements",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0)
		strcpy(e.poste,"Agricole_Des_Equipements");
	else if(strcmp("Financier",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0)
		strcpy(e.poste,"Financier");
	else 
if(strcmp("Agricole des tropeaux",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0)
		strcpy(e.poste,"Agricole_Des_Tropeaux");
	else if(strcmp("Financier",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0)
		strcpy(e.poste,"Financier");
	else if(strcmp("Technicien des capteurs de temperatures",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0)
		strcpy(e.poste,"Technicien_Des_Capteurs_De_Temperatures");
	else 
		strcpy(e.poste,"Technicien des capteurs d'humidite");
	inscription_employer(e);
	
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
	Affichage_employer(treeviewmenu,"employer.txt");*/
	

}
void on_btn_searchsupp_clicked(GtkWidget *button, gpointer user_data)
{
}

void on_btn_suppsupp_clicked(GtkWidget *button, gpointer user_data)
{
	 
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
	gchar* poste;
	
	E e;
	GtkTreeModel *model = gtk_tree_view_get_model(treeview);
	if(gtk_tree_model_get_iter(model,&iter,path))
	{
		gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,1,&nom,2,&prenom,3,&date_naissance,4,&email,5,&tel,6,&poste,-1);
		
		strcpy(e.id,id);
		strcpy(e.nom,nom);
		strcpy(e.prenom,prenom);
		strcpy(e.date_naissance,date_naissance);
		strcpy(e.email,email);
		strcpy(e.tel,tel);
		strcpy(e.poste,poste);
		supprimer_employer(e);
		Affichage_employer(treeview,"employer.txt");

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
on_back_abs_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{

	GtkWidget *absance;
	absance=lookup_widget(objet,"absance");
	gtk_widget_destroy(absance);
	
	
}


void
on_btn_mod_modifier_clicked            (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	FILE *f,f1;
	GtkWidget *id,*nom,*prenom,*email,*tel;
	GtkWidget *window2_modifier;
	char id1[10];
	E e,e1;
	window2_modifier=lookup_widget(objet_graphique,"modifier");
	id=lookup_widget(objet_graphique,"input_mod_id");
	strcpy(id1,gtk_entry_get_text(GTK_ENTRY(id)));
	f=fopen("employer.txt","r");
	while(!feof(f))
	{
		fscanf(f,"%s  %s %s  %s  %s  %s  %s %s\n ", e.id, e.nom, e.prenom, e.date_naissance, e.password, e.email, e.tel, e.poste);
	
		if(strcmp(e.id,id1)==0)
		{
			strcpy(e1.id,e.id);
			strcpy(e1.date_naissance,e.date_naissance);
			strcpy(e1.password,e.password);
			strcpy(e1.poste,e.poste);	
			supprimer1(id1);
			//modifier(e1,id1);
		}
	}
	
	id=lookup_widget(objet_graphique,"input_mod_id");
	nom=lookup_widget(objet_graphique,"input_mod_nom");
	prenom=lookup_widget(objet_graphique,"input_mod_prenom");
	email=lookup_widget(objet_graphique,"input_mod_email");
	tel=lookup_widget(objet_graphique,"input_mod_tel");
	strcpy(e1.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
	strcpy(e1.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
	strcpy(e1.email,gtk_entry_get_text(GTK_ENTRY(email)));
	strcpy(e1.tel,gtk_entry_get_text(GTK_ENTRY(tel)));

	inscription_employer(e1);
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
	gchar* poste;
	
	E e,e1;
	GtkTreeModel *model = gtk_tree_view_get_model(treeview);
	if(gtk_tree_model_get_iter(model,&iter,path))
	{
		gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,1,&nom,2,&prenom,3,&date_naissance,4,&email,5,&tel,6,&poste,-1);
		
		strcpy(e.id,id);
		strcpy(e.nom,nom);
		strcpy(e.prenom,prenom);
		strcpy(e.date_naissance,date_naissance);
		strcpy(e.email,email);
		strcpy(e.tel,tel);
		strcpy(e.poste,poste);
		supprimer_employer(e);
	
	/*FILE *f, *ftmp;
	f = fopen("employer.txt", "r");
	ftmp = fopen("tmp.txt", "w");
	
	while (!feof(f))
	{
		fscanf(f, "%s  %s %s  %s  %s  %s  %s %s\n ", e.id, e.nom, e.prenom, e.date_naissance, e.password, e.email, e.tel, e.poste);
		if (strcmp(e1.id,e.id)!=0)
			fprintf(ftmp, "%s  %s %s  %s  %s  %s  %s %s\n ", e.id, e.nom, e.prenom, e.date_naissance, e.password, e.email, e.tel, e.poste);
	}
	fclose(ftmp);
	fclose(f);
	remove("employer.txt");
	rename("tmp.txt", "employer.txt");*/

		Affichage_employer(treeview,"employer.txt");
		 GtkWidget *delete;
    delete=create_supprimer();
    gtk_widget_show(delete);
	}
}


void
on_btn_abs_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	
	//annee=lookup_widget(objet_graphique,"spinannee");
	//mois=lookup_widget(objet_graphique,"spinannee");
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
	Affichage_employer(treeviewmenu,"employer.txt");

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
	gchar ch[90]="",ch1[100],ch2[100],ch3[100],ch4[100],ch5[100],ch6[100],ch7[100],ch8[100];
	E e,e1;	
	GtkWidget *id;
	GtkWidget *label;
	GtkWidget *window5_chercher;
	char id1[15];
	id=lookup_widget(objet_graphique,"input_search_final");
	strcpy(id1,gtk_entry_get_text(GTK_ENTRY(id)));
	label=lookup_widget(objet_graphique,"result_search");
	recherche_employer(id1);
	f2=fopen("tempo.txt","r");
	while(!feof(f2))
		{
			fscanf(f2, "%s  %s %s  %s  %s  %s  %s %s\n ", e1.id, e1.nom, e1.prenom, e1.date_naissance, e1.password, e1.email, e1.tel, e1.poste);
		}
	strcpy(ch1,e1.id);
	strcpy(ch2,e1.nom);
	strcpy(ch3,e1.prenom);
	strcpy(ch4,e1.date_naissance);
	strcpy(ch5,e1.password);
	strcpy(ch6,e1.email);
	strcpy(ch7,e1.tel);
	strcpy(ch8,e1.poste);
	strcat(ch,ch1);
	strcat(ch," ");
	strcat(ch,ch2);
	strcat(ch," ");
	strcat(ch,ch3);
	strcat(ch," ");
	strcat(ch,ch4);
	strcat(ch," ");
	strcat(ch,ch5);
	strcat(ch," ");
	strcat(ch,ch6);
	strcat(ch," ");
	strcat(ch,ch7);
	strcat(ch," ");
	strcat(ch,ch8);

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

