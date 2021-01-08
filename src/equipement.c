#ifdef HAVE_CONFIG_H
#   include <config.h>
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "equipement.h"
#include <gtk/gtk.h>
#include <string.h>
enum
{
	EID,
	ENOM,
	EDATE,
	EPRIX,
	EDIMENSION,
	EMARQUE,
	EETAT,
	ESOURCE_DENERGIE,
	EETAT_PANNE,
	ETEMPS_DARRET,
	ECOUT_DREPARATION,
	ENBDEREPARATION,
	COLUMNS
};
void ajouter_un_equipement(equipement E,char file[50])
{
	FILE *f;
	f=fopen(file,"a+");
	if(f!=NULL)
	{
		fprintf(f,"%s %s %d/%d/%d %.2f %.2fx%.2fx%.2f %s %d %d %d %d %.2f %d\n",E.id,E.nom,E.d.j,E.d.m,E.d.a,E.prix,E.dm.largeur,E.dm.hauteur,E.dm.longueur,E.marque,E.etat,E.source_denergie,E.etat_panne,E.temps_darret,E.cout_dreparation,E.nbdereparation);
	}
	fclose(f);
}

void afficher_les_equipements(GtkWidget *liste,char file[50])
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
	GtkListStore *store;
	char id[10];
	char nom[100];
	int j;
	int m;
	int a;
	float prix;
	float largeur;
	float hauteur;
	float longueur;
	char marque[20]; 
	int etat;
	int source_denergie;
	int etat_panne;
	int temps_darret;
	float cout_dreparation;
	int nbdereparation;
	char jour[3];
	char mois[3];
	char annee[10];
	char date[25];
	char la[50];
	char h[50];
	char lo[50];
	char dimension[50];
	char etat1[10];
	char source_denergie1[17];
	char etat_panne1[10];
	store=NULL;
	FILE *f;
	store=gtk_tree_view_get_model(liste);
	if(store==NULL)
	{
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Id",renderer,"text",EID,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",ENOM,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Date",renderer,"text",EDATE,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Prix",renderer,"text",EPRIX,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Dimension",renderer,"text",EDIMENSION,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Marque",renderer,"text",EMARQUE,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Etat",renderer,"text",EETAT,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Source d'Energie",renderer,"text",ESOURCE_DENERGIE,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Etat Panne",renderer,"text",EETAT_PANNE,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Temps d'Arret",renderer,"text",ETEMPS_DARRET,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Couts Des Reparations",renderer,"text",ECOUT_DREPARATION,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
		renderer =gtk_cell_renderer_text_new();
		column = gtk_tree_view_column_new_with_attributes("Nombre De Reparation",renderer,"text",ENBDEREPARATION,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	}
	store=gtk_list_store_new (COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_FLOAT,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_INT,G_TYPE_FLOAT,G_TYPE_INT);
	f=fopen(file,"r");
	if(f==NULL)
	{
		return;
	}
	else
	{
		while(fscanf(f,"%s %s %d/%d/%d %f %fx%fx%f %s %d %d %d %d %f %d\n",id,nom,&j,&m,&a,&prix,&largeur,&hauteur,&longueur,marque,&etat,&source_denergie,&etat_panne,&temps_darret,&cout_dreparation,&nbdereparation)!=EOF)
		{
			strcpy(date,"");
			strcpy(dimension,"");
			sprintf(jour,"%d",j);
			sprintf(mois,"%d",m);
			sprintf(annee,"%d",a);
			strcat(strcat(strcat(strcat(strcat(date,jour),"/"),mois),"/"),annee);
			sprintf(la,"%.2f",largeur);
			sprintf(h,"%.2f",hauteur);
			sprintf(lo,"%.2f",longueur);
			strcat(strcat(strcat(strcat(strcat(dimension,la),"x"),h),"x"),lo);
			if(etat==0)
				strcpy(etat1,"Occasion");
			else
				strcpy(etat1,"Nouveau");
			if(source_denergie==0)
				strcpy(source_denergie1,"Electrique");
			else if(source_denergie==1)
				strcpy(source_denergie1,"Main-d'oeuvre");
			else if(source_denergie==2)
				strcpy(source_denergie1,"Travail d'Animal");
			else if(source_denergie==3)
				strcpy(source_denergie1,"Essence");
			else
				strcpy(source_denergie1,"Gazole");
			if(etat_panne==0)
				strcpy(etat_panne1,"En panne");
			else
				strcpy(etat_panne1,"OK");
			gtk_list_store_append(store,&iter);
				gtk_list_store_set(store,&iter,EID,id,ENOM,nom,EDATE,date,EPRIX,prix,EDIMENSION,dimension,EMARQUE,marque,EETAT,etat1,ESOURCE_DENERGIE,source_denergie1,EETAT_PANNE,etat_panne1,ETEMPS_DARRET,temps_darret,ECOUT_DREPARATION,cout_dreparation,ENBDEREPARATION,nbdereparation,-1);
		}
		fclose(f);
		gtk_tree_view_set_model (GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
		g_object_unref (store);
	}

	

}

void supprimer_un_equipment(equipement E,char file[100])
{
	char id[100];
	char nom[100];
	int j;
	int m;
	int a;
	float prix;
	float largeur;
	float hauteur;
	float longueur;
	char marque[20]; 
	int etat;
	int source_denergie;
	int etat_panne;
	int temps_darret;
	float cout_dreparation;
	int nbdereparation;
	FILE *f,*ftmp;
	f=fopen(file,"r");
	ftmp=fopen("tmp.txt","w");
	while(fscanf(f,"%s %s %d/%d/%d %f %fx%fx%f %s %d %d %d %d %f %d\n",id,nom,&j,&m,&a,&prix,&largeur,&hauteur,&longueur,marque,&etat,&source_denergie,&etat_panne,&temps_darret,&cout_dreparation,&nbdereparation)!=EOF)
		{
			
			if(strcmp(id,E.id)!=0 || strcmp(nom,E.nom) || E.d.j!=j || E.d.m!=m || E.d.a!=a || E.prix!=prix || E.dm.largeur!=largeur || E.dm.hauteur!=hauteur || E.dm.longueur!=longueur || strcmp(marque,E.marque)!=0 || E.etat!=etat || E.source_denergie!=source_denergie || E.etat_panne!=etat_panne || E.temps_darret || E.cout_dreparation!=cout_dreparation || E.nbdereparation!=nbdereparation)
				fprintf(ftmp,"%s %s %d/%d/%d %.2f %.2fx%.2fx%.2f %s %d %d %d %d %.2f %d\n",E.id,E.nom,E.d.j,E.d.m,E.d.a,E.prix,E.dm.largeur,E.dm.hauteur,E.dm.longueur,E.marque,E.etat,E.source_denergie,E.etat_panne,E.temps_darret,E.cout_dreparation,E.nbdereparation);
		}
	fclose(ftmp);
	fclose(f);
	remove(file);
	rename("tmp.txt",file);
}

void chercher_un_equipement(char id[50])
{
	equipement E,E1;
	FILE *f,*ftmp;
	f=fopen("equipement.txt","r");
	ftmp=fopen("tmp.txt","w");
	while(fscanf(f,"%s %s %d/%d/%d %f %fx%fx%f %s %d %d %d %d %f %d\n",E.id,E.nom,&E.d.j,&E.d.m,&E.d.a,&E.prix,&E.dm.largeur,&E.dm.hauteur,&E.dm.longueur,E.marque,&E.etat,&E.source_denergie,&E.etat_panne,&E.temps_darret,&E.cout_dreparation,&E.nbdereparation)!=EOF)
		{
			if(strcmp(E.id,id)==0)
				fprintf(ftmp,"%s %s %d/%d/%d %.2f %.2fx%.2fx%.2f %s %d %d %d %d %.2f %d\n",E.id,E.nom,E.d.j,E.d.m,E.d.a,E.prix,E.dm.largeur,E.dm.hauteur,E.dm.longueur,E.marque,E.etat,E.source_denergie,E.etat_panne,E.temps_darret,E.cout_dreparation,E.nbdereparation);
		}
	fclose(f);
	fclose(ftmp);
		
	
}
void supprimer_un_equipment1(char id[100],char file[100])
{
	equipement E;
	FILE *f,*ftmp;
	f=fopen(file,"r");
	ftmp=fopen("tmp2.txt","w");
	if(f==NULL)
		return;
	else
	{
		while(fscanf(f,"%s %s %d/%d/%d %f %fx%fx%f %s %d %d %d %d %f %d\n",E.id,E.nom,&E.d.j,&E.d.m,&E.d.a,&E.prix,&E.dm.largeur,&E.dm.hauteur,&E.dm.longueur,E.marque,&E.etat,&E.source_denergie,&E.etat_panne,&E.temps_darret,&E.cout_dreparation,&E.nbdereparation)!=EOF)
			{
				if(strcmp(E.id,id)!=0)
					fprintf(ftmp,"%s %s %d/%d/%d %.2f %.2fx%.2fx%.2f %s %d %d %d %d %.2f %d\n",E.id,E.nom,E.d.j,E.d.m,E.d.a,E.prix,E.dm.largeur,E.dm.hauteur,E.dm.longueur,E.marque,E.etat,E.source_denergie,E.etat_panne,E.temps_darret,E.cout_dreparation,E.nbdereparation);
			}
		fclose(ftmp);
		fclose(f);
		remove(file);
		rename("tmp2.txt",file);
	}
}
void chercher_marque(char file[100],char ch[20])
{
    FILE *f3;
    int i=1,n=0,j,k,c1,max1=0,pos;
    char mot[100][100];
    int max[100]={0};
    capteur c;
    FILE *f,*ftmp,*f2;
    f=fopen(file,"r");
    ftmp=fopen("tmp5.txt","w");
    
    while(!feof(f))
    {
        fscanf(f,"%d %s %s %s %d %d\n",&c.id_capteur,c.nom,c.type_capteur,c.marque_capteur,&c.cout_capteur,&c.etat);
        if(c.etat==0)
	    {
            	fprintf(ftmp,"%10s\n",c.marque_capteur);
                n++;
		
	    }
        
    }
    fclose(ftmp);
    f2=fopen("tmp5.txt","r");
    fgets(mot[0],11,f2);
    while ((c1 = getc(f)) != EOF)
    {
        if(c1=='\n')
        {
            fgets(mot[i],11,f2);
            i++;
        }
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
	{
		if(strcmp(mot[j],mot[k])==0)
			max[j]++;
	}
    }
    for(j=0;j<n;j++)
    {
        if(max[j]>max1)
        {
            max1=max[j];
            pos=j;
        }
    }
    strcpy(ch,mot[pos]);
    fclose(ftmp);
    fclose(f);
    

}

void tri_fichier(char file[70])
{
	FILE *f,*ftri,*ftri2,*f1,*f2;
	int n,i=0,j,c1,k,l,m;
	eqp tab[100];
	char *mot[1000];
	char *c;
	char id[50];
	char nom[50];
	int j1;
	int m1;
	int a;
	float prix;
	float largeur;
	float hauteur;
	float longueur;
	char marque[20]; 
	int etat;
	int source_denergie;
	int etat_panne;
	int temps_darret;
	float cout_dreparation;
	int nbdereparation;
	f=fopen(file,"r");
	ftri=fopen("tri.txt","w");
	ftri2=fopen("tri2.txt","w");
	if(f==NULL)
		return;
	else
	{
		while(fscanf(f,"%s %s %d/%d/%d %f %fx%fx%f %s %d %d %d %d %f %d\n",id,nom,&j1,&m1,&a,&prix,&largeur,&hauteur,&longueur,marque,&etat,&source_denergie,&etat_panne,&temps_darret,&cout_dreparation,&nbdereparation)!=EOF)
		{
			fprintf(ftri,"%20s %20s\n",nom,id);
			
		}
   		fclose(ftri);
    		f1=fopen("tri.txt","r");
    		while(fgets(mot[i],100,f1))
		{
			mot[i][strlen(mot[i])-1]='\0';
			i++;
		}
		n=i;
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(strcmp(mot[j],mot[k])<0)
				{
					c=mot[j];
					mot[j]=mot[k];
					mot[k]=c;
				}
			}
		}
		fprintf(ftri2,"%s",mot[0]);

		
		
		
	}
	fclose(f);
	fclose(f1);
	fclose(f2);
	fclose(ftri2);
	
	
}

int existe_id_equipement(char id[15])

{
	equipement E;
	FILE *f;
	f=fopen("equipement.txt","r");
	while(fscanf(f,"%s %s %d/%d/%d %f %fx%fx%f %s %d %d %d %d %f %d\n",E.id,E.nom,&E.d.j,&E.d.m,&E.d.a,&E.prix,&E.dm.largeur,&E.dm.hauteur,&E.dm.longueur,E.marque,&E.etat,&E.source_denergie,&E.etat_panne,&E.temps_darret,&E.cout_dreparation,&E.nbdereparation)!=EOF)
		{
			if(strcmp(E.id,id)==0)
				return 1;
		}
	return 0;
	fclose(f);

		
	
}

	

