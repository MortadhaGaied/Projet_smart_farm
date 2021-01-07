#include <gtk/gtk.h>
typedef struct client
{
char id[10];
char nom[20];
char prenom[20];
char date_naissance[30];
char email [50];
char tel[10];
}C;
typedef struct date
{
    int id;
int jour;
int mois;
int annee;
int x;
}Date;

void inscription_client(C cl);
void modifier_client(C cl,char id[]);
void supprimer_client(C cl);
void recherche_client(char id[100]);
void Affichage_client(GtkWidget *liste,char file[50]);
int calculer_absance();
void chercher_client(char id[10]);
void supprimer1(char id[10]);
void modifier(C cl, char id[]);
