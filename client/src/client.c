#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "client.h"
#include <gtk/gtk.h>
enum
{
EID,ENOM,EPRENOM,EDATE_NAISSANCE,EEMAIL,ETEL,COLUMNS
};

void inscription_client(C cl)
{
	FILE *f;
	f = fopen("client.txt", "a+");
	if (f != NULL)
	{
		fprintf(f, "%s  %s %s  %s  %s  %s  \n", cl.id, cl.nom, cl.prenom, cl.date_naissance,  cl.email, cl.tel);	
	}
	fclose(f);
}
void supprimer_client(C cl)
{
	C c;
	FILE *f, *ftmp;
	f = fopen("client.txt", "r");
	ftmp = fopen("tmp.txt", "w");
	
	while (!feof(f))
	{
		fscanf(f, "%s  %s %s  %s  %s  %s  \n ", c.id, c.nom, c.prenom, c.date_naissance, c.email, c.tel);
		if (strcmp(cl.id,c.id)!=0)
			fprintf(ftmp, "%s  %s %s  %s  %s  %s  \n ", cl.id, c.nom, cl.prenom, cl.date_naissance, cl.email, cl.tel);
	}
	fclose(ftmp);
	fclose(f);
	remove("client.txt");
	rename("tmp.txt", "client.txt");
}

void Affichage_client(GtkWidget *liste, char file[50])
{	
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
	GtkListStore *store;
	FILE *f;
	char c;
	char id[10];
	char nom[20];
	char prenom[20];
	char date_naissance[30];
	//char password[20];
	char email [20];
	char tel[10];
	char poste[20];
	store=NULL;
	C cc;
	store=gtk_tree_view_get_model(liste);
	if(store==NULL)
	{
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("id",renderer,"text",EID,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("nom",renderer,"text",ENOM,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("prenom",renderer,"text",EPRENOM,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("date_naissance",renderer,"text",EDATE_NAISSANCE,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

		/*renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("password",renderer,"text",EPASSWORD,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);*/

		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("email",renderer,"text",EEMAIL,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("tel",renderer,"text",ETEL,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

		/*renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("poste",renderer,"text",EPOSTE,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);*/
	}
	store=gtk_list_store_new (COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
	f = fopen(file, "r");
	if(f==NULL)
	{
		return;
	}
	else
	{
		while(fscanf(f,"%s  %s %s  %s  %s  %s  %s %s\n ", id, nom, prenom, date_naissance,  email, tel)!=EOF)
		{
			
			gtk_list_store_append(store,&iter);
			gtk_list_store_set(store,&iter,EID,id,ENOM,nom,EPRENOM,prenom,EDATE_NAISSANCE,date_naissance,EEMAIL,email,ETEL,tel,-1);
		}
		fclose(f);
		gtk_tree_view_set_model (GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
		g_object_unref (store);
	}
}

void recherche_client(char id[50])
{
	C c;
	FILE *f, *ftmp;
	char c1;
	f = fopen("client.txt", "r");
	ftmp = fopen("tempo.txt", "w");
	while (!feof(f))
	{
		fscanf(f, "%s  %s %s  %s  %s  %s  \n ", c.id, c.nom, c.prenom, c.date_naissance,  c.email, c.tel);
		if (strcmp(c.id,id)==0)
			fprintf(ftmp, "%s  %s %s  %s  %s  %s  \n ", c.id, c.nom, c.prenom, c.date_naissance, c.email, c.tel);
	}
	fclose(f);
	fclose(ftmp);
	
}

/*int calculer_absance()
{
	float tab[12];
   FILE *f, *f1;
	Date d;
	int a, t, i,m;

	f = fopen("client.txt", "r");
	i = 2017;
	
   
    
		a = 0;
		t = 0;
		f1 = fopen("absenteisme.txt", "r");
		while (!feof(f1))
		{

			fscanf(f1, "%d %d %d %d %d\n", &d.id, &d.jour, &d.mois, &d.annee, &d.x);
			if (d.annee == i && d.mois == m)

			{
				if (d.x == 0)
				{
					a++;

				}
				t++;
				//printf("%d fin\n",t);
			}
		}
		float taux = (float)a / t * 100;
		tab[m-1]=taux;

		//printf("%d %d = %f \n", i,m, taux);
		m++;
		fclose(f1);


		
		
		printf("| le mois %d : %.2f|\n",m+1,taux);
}
*/
void modifier(C c1, char id[])
{

C c;
	FILE *f, *ftmp;
	f = fopen("client.txt", "r");
	ftmp = fopen("tmp.txt", "w");
	
	while (!feof(f))
	{
		fscanf(f, "%s  %s %s  %s  %s  %s  \n ", c.id, c.nom, c.prenom, c.date_naissance, c.email, c.tel);
		if (strcmp(id,c.id)!=0)
			fprintf(ftmp, "%s  %s %s  %s  %s  %s\n ", c.id, c.nom, c.prenom, c.date_naissance, c.email, c.tel);
		else
       fprintf(ftmp, "%s  %s %s  %s  %s  %s  \n ", c1.id, c1.nom, c1.prenom, c1.date_naissance, c1.email, c1.tel); 
	}
	fclose(ftmp);
	fclose(f);
	remove("client.txt");
	rename("tmp.txt", "client.txt");

}

void modifier_client(C cl,char id[])
{/*

	int choix;
	char nom[20], prenom[20], date_naissance[30], password[20], email[50], poste[100],tel[100];

	FILE *f, *f1;
	f = fopen("client.txt", "r");
	f1 = fopen("tempo.txt", "w");
	
	while (!feof(f))
	{

		fscanf(f, "%s  %s %s  %s  %s  %s  %s %s\n ", e.id, e.nom, e.prenom, e.date_naissance, e.password, e.email, e.tel, e.poste);
		if (e.id != id)
			fprintf(f1, "%s  %s %s  %s  %s  %s  %s %s\n ", e.id, e.nom, e.prenom, e.date_naissance, e.password, e.email, e.tel, e.poste);
		if (e.id == id)
		{
			switch (choix)
			{
			case 1:
				printf("donner le nouveau nom:\n ");
				scanf("%s", nom);
				strcpy(e.nom, nom);
				break;
			case 2:
				printf("donner le nouveau prenom:\n ");
				scanf("%s", prenom);
				strcpy(e.prenom, prenom);
				break;
			case 3:
				printf("donner la nouvelle date de naissance:\n ");
				scanf("%s", date_naissance);
				strcpy(e.date_naissance, date_naissance);
				break;
			case 4:
				printf("donner le nouveau mot de passe:\n ");
				scanf("%s", password);
				strcpy(e.password, password);
				break;
			case 5:
				printf("donner le nouveau emai:\n");
				scanf("%s", email);
				strcpy(e.email, email);
				break;
			case 6:
				printf("donner le nouveau numero de telephone\n: ");
				scanf("%s", tel);
				strcpy(e.tel, tel);
				
				break;
			}
			fprintf(f1, "%s  %s %s  %s  %s  %s  %s %s\n ", e.id, e.nom, e.prenom, e.date_naissance, e.password, e.email, e.tel, e.poste);
		}
	}
	fclose(f1);
	fclose(f);
	remove("client.txt");
	rename("tempo.txt", "client.txt");*/
}
void chercher_client(char id[10])
{
	gchar ch[100];
	C c,c1;
	FILE *f,*f1;
	f=fopen("client.txt","r");
	f1=fopen("tempo.txt","w");
	while(!feof(f))


		if (c.id == id)
					{


			fscanf(f, "%s  %s %s  %s  %s  %s  \n ", c.id, c.nom, c.prenom, c.date_naissance, c.email, c.tel);
			if(strcmp(c.id,id)==0)
				fprintf(f1, "%s  %s %s  %s  %s  %s  \n ", c.id, c.nom, c.prenom, c.date_naissance, c.email, c.tel);
		}
	fclose(f);
	fclose(f1);
	

	
}
void supprimer1(char id[10])
{
	C c,c1;
	FILE *f, *ftmp;
	f = fopen("client.txt", "r");
	ftmp = fopen("tmp.txt", "w");
	
	while (!feof(f))
	{
		fscanf(f, "%s  %s %s  %s  %s  %s  \n ", c.id, c.nom, c.prenom, c.date_naissance, c.email, c.tel);
		if (strcmp(id,c.id)!=0)
			fprintf(ftmp, "%s  %s %s  %s  %s  %s  \n ", c.id, c.nom, c.prenom, c.date_naissance, c.email, c.tel);
	}
	fclose(ftmp);
	fclose(f);
	remove("client.txt");
	rename("tmp.txt", "client.txt");
}
