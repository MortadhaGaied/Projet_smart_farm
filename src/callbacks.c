#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "equipement.h"

int x,y;
void
on_radiobutton1_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
		x=1;
}


void
on_radiobutton2_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
		x=0;
}
void
on_radiobuttonok_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
		y=1;
}


void
on_radiobuttonen_panne_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
		y=0;
}
void
on_buttonajouter_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	FILE *f,*ftmp;
	int veriferreur=0;
	GtkWidget *id,*nom,*j,*m,*a,*prix,*largeur,*hauteur,*longueur,*marque,*etat;
	GtkWidget *comboboxse;
	GtkWidget *Gestion_des_equipements;
	Gestion_des_equipements=lookup_widget(objet_graphique,"Gestion_des_equipements");
	gtk_widget_hide(lookup_widget(objet_graphique,"labelerreurid_ajouter_GST_equipement"));
	gtk_widget_hide(lookup_widget(objet_graphique,"labelerreurid1_ajouter_GST_equipement"));
	gtk_widget_hide(lookup_widget(objet_graphique,"labelerreurnom_ajouter_GST_equipement"));
	gtk_widget_hide(lookup_widget(objet_graphique,"labelerreurmarque_ajouter_GST_equipement"));
	equipement E;
	id=lookup_widget (objet_graphique,"entryid");
	nom=lookup_widget (objet_graphique,"entrynom");
	j=lookup_widget(objet_graphique,"spinbuttonj");	
	m=lookup_widget(objet_graphique,"spinbuttonm");	
	a=lookup_widget(objet_graphique,"spinbuttona");	
	prix=lookup_widget (objet_graphique,"spinbuttonprix");
	largeur=lookup_widget(objet_graphique,"spinbuttonla");	
	hauteur=lookup_widget(objet_graphique,"spinbuttonh");	
	longueur=lookup_widget(objet_graphique,"spinbuttonlo");	
	marque=lookup_widget (objet_graphique,"entrymarque");	
	strcpy(E.id, gtk_entry_get_text(GTK_ENTRY(id)));
	strcpy(E.nom, gtk_entry_get_text(GTK_ENTRY(nom)));
	strcpy(E.marque, gtk_entry_get_text(GTK_ENTRY(marque)));
	E.d.j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (j));
	E.d.m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (m));
	E.d.a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (a));
	E.prix=gtk_spin_button_get_value_as_float (GTK_SPIN_BUTTON (prix));
	E.dm.largeur=gtk_spin_button_get_value_as_float (GTK_SPIN_BUTTON (largeur));
	E.dm.hauteur=gtk_spin_button_get_value_as_float (GTK_SPIN_BUTTON (hauteur));
	E.dm.longueur=gtk_spin_button_get_value_as_float (GTK_SPIN_BUTTON (longueur));
	comboboxse=lookup_widget (objet_graphique,"comboboxse");
	if(strcmp("Electrique",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxse)))==0)
		E.source_denergie=0;
	else if(strcmp("Main-d'oeuvre",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxse)))==0)
		E.source_denergie=1;
	else if(strcmp("Travail d'Animal",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxse)))==0)
		E.source_denergie=2;
	else if(strcmp("Essence",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxse)))==0)
		E.source_denergie=3;
	else
		E.source_denergie=4;
	E.etat=x;
	E.etat_panne=1;
	E.temps_darret=0;
	E.cout_dreparation=0;
	E.nbdereparation=0;
	if (strcmp(E.nom,"")==0)
	{
		gtk_widget_show (lookup_widget(objet_graphique,"labelerreurnom_ajouter_GST_equipement"));
		veriferreur=1;
	}
	if (strcmp(E.id,"")==0)
	{
		gtk_widget_show (lookup_widget(objet_graphique,"labelerreurid_ajouter_GST_equipement"));
		veriferreur=1;
	}
	if (strcmp(E.marque,"")==0)
	{
		gtk_widget_show (lookup_widget(objet_graphique,"labelerreurmarque_ajouter_GST_equipement"));
		veriferreur=1;
	}
	if(veriferreur==0)
	{

		if(existe_id_equipement(E.id)==0)
		{
			ajouter_un_equipement(E,"equipement.txt");
		}
		else
		{
			gtk_widget_show (lookup_widget(objet_graphique,"labelerreurid1_ajouter_GST_equipement"));
		}
	}
	gtk_entry_set_text(GTK_ENTRY(lookup_widget(objet_graphique,"entrynom")),"");
	gtk_entry_set_text(GTK_ENTRY(lookup_widget(objet_graphique,"entrymarque")),"");
	gtk_entry_set_text(GTK_ENTRY(lookup_widget(objet_graphique,"entryid")),"");
	
}


void
on_buttonsuivant_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
	gtk_notebook_next_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));
	GtkWidget *Gestion_des_equipements;
	GtkWidget *treeview1;
	Gestion_des_equipements=lookup_widget(objet,"Gestion_des_equipements");
	treeview1=lookup_widget(Gestion_des_equipements,"treeview1");
	afficher_les_equipements(treeview1,"equipement.txt");
}




void
on_buttonchercher_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{

	GtkWidget *id;
	char id1[100];
	id=lookup_widget (objet,"entryid1");
	strcpy(id1, gtk_entry_get_text(GTK_ENTRY(id)));
	GtkWidget *Gestion_des_equipements;
	GtkWidget *treeview1;
	Gestion_des_equipements=lookup_widget(objet,"Gestion_des_equipements");	
	treeview1=lookup_widget(Gestion_des_equipements,"treeview1");
	if(strcmp(id1,"")!=0)
	{
		chercher_un_equipement(id1);
		afficher_les_equipements(treeview1,"tmp.txt");
		remove("tmp.txt");
	}
	else
		afficher_les_equipements(treeview1,"equipement.txt");
		

}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	gchar* id;

	GtkTreeModel *model = gtk_tree_view_get_model(treeview);
	if(gtk_tree_model_get_iter(model,&iter,path))
	{
		gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,-1);
		supprimer_un_equipment1(id,"equipement.txt");
		supprimer_un_equipment1(id,"equipement_enpanne.txt");
		afficher_les_equipements(treeview,"equipement.txt");
	}
		

}


void
on_buttonprecedent_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
	gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));
	
	
}


void
on_buttonmodifier_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
	FILE *f;
	f=fopen("modifier.txt","w");
	GtkTreeModel *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget *treeview1;
	GtkWidget *Gestion_des_equipements;
	GtkWidget *treeview3;
	Gestion_des_equipements=lookup_widget(objet,"Gestion_des_equipements");	
	treeview3=lookup_widget(Gestion_des_equipements,"treeview3");
        gchar* id;
	gchar* etat;
        treeview1=lookup_widget(objet,"treeview1");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview1));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        { 
		gtk_tree_model_get (model,&iter,0,&id,6,&etat,-1);
		chercher_un_equipement(id);
		afficher_les_equipements(treeview3,"tmp.txt");
		remove("tmp.txt");
		gtk_notebook_set_current_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")),3);
		fprintf(f,"%s %s",id,etat);
	}
	fclose(f);
}


void
on_buttonsuivant1_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
	gtk_notebook_next_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));
}


void
on_buttonprecedent1_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
	gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));
	GtkWidget *Gestion_des_equipements;
	GtkWidget *treeview1;
	Gestion_des_equipements=lookup_widget(objet,"Gestion_des_equipements");
	treeview1=lookup_widget(Gestion_des_equipements,"treeview1");
	afficher_les_equipements(treeview1,"equipement.txt");
}


void
on_buttonsuivant2_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
	gtk_notebook_next_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));


}




void
on_buttonprecedent2_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
	gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));
}


void
on_buttonsuivant3_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
	gtk_notebook_next_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));	
	GtkWidget *Gestion_des_equipements;
	GtkWidget *treeview2;
	Gestion_des_equipements=lookup_widget(objet,"Gestion_des_equipements");
	treeview2=lookup_widget(Gestion_des_equipements,"treeview2");
	afficher_les_equipements(treeview2,"equipement_enpanne.txt");
}


void
on_buttonreparer_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
	FILE *f,*g;
	f=fopen("reparer.txt","w");
	GtkTreeModel *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget *treeview2,*te,*cr;
	GtkWidget *Gestion_des_equipements;
	Gestion_des_equipements=lookup_widget(objet,"Gestion_des_equipements");	
	treeview2=lookup_widget(Gestion_des_equipements,"treeview2");
	equipement E;
	gchar* id;
	char date[50];
	char dm[50]; 
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview2));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        { 
		gtk_tree_model_get (model,&iter,0,&id,-1);
		chercher_un_equipement(id);
		g=fopen("tmp.txt","r");
		if(g!=NULL)
			fscanf(g,"%s %s %d/%d/%d %f %fx%fx%f %s %d %d %d %d %f %d\n",E.id,E.nom,&E.d.j,&E.d.m,&E.d.a,&E.prix,&E.dm.largeur,&E.dm.hauteur,&E.dm.longueur,E.marque,&E.etat,&E.source_denergie,&E.etat_panne,&E.temps_darret,&E.cout_dreparation,&E.nbdereparation);
		supprimer_un_equipment1(id,"equipement.txt");
		supprimer_un_equipment1(id,"equipement_enpanne.txt");	
	}
	E.etat_panne=1;
	te=lookup_widget (objet,"spinbuttontemps_darret");
	E.temps_darret+=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (te));
	cr=lookup_widget (objet,"spinbuttoncout_dreparation");
	E.cout_dreparation+=gtk_spin_button_get_value_as_float (GTK_SPIN_BUTTON (cr));
	E.nbdereparation++;
	
	if(E.etat_panne==0)
		ajouter_un_equipement(E,"equipement_enpanne.txt");
	ajouter_un_equipement(E,"equipement.txt");
	fclose(f);
	fclose(g);
	remove("tmp.txt");
	remove("reparer.txt");
	Gestion_des_equipements=lookup_widget(objet,"Gestion_des_equipements");
	treeview2=lookup_widget(Gestion_des_equipements,"treeview2");
	afficher_les_equipements(treeview2,"equipement_enpanne.txt");

	
}


void
on_buttonprecedent3_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
	gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));
}


void
on_buttonsuivant4_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
	gtk_notebook_next_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));
}





void
on_buttonmodifier1_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	FILE *f,*f1,*ftmp;
	char id[20];	
	char etat[20];
	int veriferreur=0;
	GtkWidget *labelErreur3,*treeview2,*Gestion_des_equipements;
	labelErreur3=lookup_widget(objet_graphique,"labelErreur3");
	
	f=fopen("equipement.txt","r");
	f1=fopen("modifier.txt","r");
	
	if(f1!=NULL)
	{
		fscanf(f1,"%s %s",id,etat);
		GtkWidget *nom,*j,*m,*a,*prix,*largeur,*hauteur,*longueur,*marque;
		GtkWidget *comboboxse1;
		GtkWidget *Gestion_des_equipements;
		Gestion_des_equipements=lookup_widget(objet_graphique,"Gestion_des_equipements");
		equipement E;
		strcpy(E.id,id);
		nom=lookup_widget (objet_graphique,"entrynom1");
		j=lookup_widget(objet_graphique,"spinbuttonj1");	
		m=lookup_widget(objet_graphique,"spinbuttonm1");	
		a=lookup_widget(objet_graphique,"spinbuttona1");	
		prix=lookup_widget (objet_graphique,"spinbuttonprix1");
		largeur=lookup_widget(objet_graphique,"spinbuttonla1");	
		hauteur=lookup_widget(objet_graphique,"spinbuttonh1");	
		longueur=lookup_widget(objet_graphique,"spinbuttonlo1");	
		marque=lookup_widget (objet_graphique,"entrymarque1");	
		strcpy(E.nom, gtk_entry_get_text(GTK_ENTRY(nom)));
		strcpy(E.marque, gtk_entry_get_text(GTK_ENTRY(marque)));
		E.d.j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (j));
		E.d.m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (m));
		E.d.a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (a));
		E.prix=gtk_spin_button_get_value_as_float (GTK_SPIN_BUTTON (prix));
		E.dm.largeur=gtk_spin_button_get_value_as_float (GTK_SPIN_BUTTON (largeur));
		E.dm.hauteur=gtk_spin_button_get_value_as_float (GTK_SPIN_BUTTON (hauteur));
		E.dm.longueur=gtk_spin_button_get_value_as_float (GTK_SPIN_BUTTON (longueur));
		comboboxse1=lookup_widget (objet_graphique,"comboboxse1");
		if(strcmp("Electrique",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxse1)))==0)
			E.source_denergie=0;
		else if(strcmp("Main-d'oeuvre",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxse1)))==0)
			E.source_denergie=1;
		else if(strcmp("Travail d'Animal",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxse1)))==0)
			E.source_denergie=2;
		else if(strcmp("Essence",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxse1)))==0)
			E.source_denergie=3;
		else
			E.source_denergie=4;
		if(strcmp(etat,"Nouveau")==0)
			E.etat=1;
		else
			E.etat=0;
		E.etat_panne=y;
		E.temps_darret=0;
		E.cout_dreparation=0;
		E.nbdereparation=0;
		if (strcmp(E.nom,"")==0)
		{
			gtk_widget_show (lookup_widget(objet_graphique,"labelerreurnom_modifier_GST_equipement"));
			veriferreur=1;
		}
		if (strcmp(E.marque,"")==0)
		{
			gtk_widget_show (lookup_widget(objet_graphique,"labelerreurmarque_modifier_GST_equipement"));
			veriferreur=1;
		}
		if(veriferreur==0)
		{
			supprimer_un_equipment1(id,"equipement.txt");
			supprimer_un_equipment1(id,"equipement_enpanne.txt");
			if(E.etat_panne==0)
				ajouter_un_equipement(E,"equipement_enpanne.txt");
			ajouter_un_equipement(E,"equipement.txt");
			treeview2=lookup_widget(Gestion_des_equipements,"treeview2");
			afficher_les_equipements(treeview2,"equipement_enpanne.txt");
			
		}
		
		
		fclose(f1);
		fclose(f);
	}
	else
	{
		const char *str="*Vous n'avez pas selectionner une ligne pour le modifier";
		const char *format="<b><span color='red'>\%s </span></b>";
		char *markup;
		markup=g_markup_printf_escaped(format,str);
		gtk_label_set_markup(GTK_LABEL(labelErreur3),markup);
		g_free(markup);
	}
	remove("modifier.txt");
	gtk_entry_set_text(GTK_ENTRY(lookup_widget(objet_graphique,"entrynom1")),"");
	gtk_entry_set_text(GTK_ENTRY(lookup_widget(objet_graphique,"entrymarque1")),"");
	Gestion_des_equipements=lookup_widget(objet_graphique,"Gestion_des_equipements");
	treeview2=lookup_widget(Gestion_des_equipements,"treeview2");
	afficher_les_equipements(treeview2,"equipement_enpanne.txt");

}


void
on_buttoncapt_T_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	char ch[20],ch1[100];
	GtkWidget *Gestion_des_equipements;
	GtkWidget *labelresultat;
	Gestion_des_equipements=lookup_widget(objet_graphique,"Gestion_des_equipements");
	labelresultat=lookup_widget(objet_graphique,"labelresultat");
	chercher_marque("capteurT.txt",ch);
	strcat(strcat(ch1,"La marque ayant les capteurs les plus defectueux est:"),ch);
	const char *format="<b><span color='green'>\%s </span></b>";
	char *markup;
	markup=g_markup_printf_escaped(format,ch1);
	gtk_label_set_markup(GTK_LABEL(labelresultat),markup);
	g_free(markup);

	
}


void
on_buttoncapt_H_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
	char ch[20],ch1[100];
	GtkWidget *Gestion_des_equipements;
	GtkWidget *labelresultat;
	Gestion_des_equipements=lookup_widget(objet,"Gestion_des_equipements");
	labelresultat=lookup_widget(objet,"labelresultat");
	chercher_marque("capteurH.txt",ch);
	strcat(strcat(ch1,"La marque ayant les capteurs les plus defectueux est:"),ch);
	const char *format="<b><span color='green'>\%s </span></b>";
	char *markup;
	markup=g_markup_printf_escaped(format,ch1);
	gtk_label_set_markup(GTK_LABEL(labelresultat),markup);
	g_free(markup);
}





void
on_buttonprecedent4_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
	gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));
}


void
on_buttonexit_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *Gestion_des_equipements;
	Gestion_des_equipements=lookup_widget(objet,"Gestion_des_equipements");
	gtk_widget_destroy(Gestion_des_equipements);
}

void
on_buttontrie_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
	
	GtkWidget *Gestion_des_equipements,*comboboxtrie;
	GtkWidget *treeview1;
	Gestion_des_equipements=lookup_widget(objet,"Gestion_des_equipements");
	comboboxtrie=lookup_widget (objet,"comboboxtrie");
	if(strcmp("Trie(A==>Z)",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxtrie)))==0)
	{
		tri_fichier("equipement.txt");
	}

		
	
}


void
on_buttontrie1_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


