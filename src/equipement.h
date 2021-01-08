#include <gtk/gtk.h>
typedef struct date
{
	int j;
	int m;
	int a;
}date;
typedef struct dimension
{
	float largeur;
	float hauteur;
	float longueur;
}dimension;
typedef struct equipement
{
	char id[50];
	char nom[50];
	date d;
	float prix;
	dimension dm;
	char marque[20]; 
	int etat;
	int source_denergie;
	int etat_panne;
	int temps_darret;
	float cout_dreparation;
	int nbdereparation;
}equipement;
typedef struct capteur
{
    char nom[20];
    int id_capteur;
    char type_capteur[20];
    char marque_capteur[22];
    int cout_capteur;
    int etat;
}capteur;
typedef struct eqp
{
	char nom1[70];
	char id1[70];
}eqp;
void ajouter_un_equipement(equipement E,char file[50]);
void afficher_les_equipements(GtkWidget *liste,char file[50]);
void supprimer_un_equipment(equipement E,char file[100]);
void chercher_un_equipement(char id[50]);
void supprimer_un_equipment1(char id[100],char file[100]);
void chercher_marque(char file[100],char ch[20]);
void tri_fichier(char file[70]);
int existe_id_equipement(char id[15]);



