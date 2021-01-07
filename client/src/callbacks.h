#include <gtk/gtk.h>


void
on_btn_modify_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_btn_search_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_btn_inscrit_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);

void
on_btn_absence_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);

void
on_btn_delete_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_btn_ajouter_clicked                 (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_btn_searchsupp_clicked              (GtkWidget       *button,
                                        gpointer         user_data);

void
on_btn_suppsupp_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_btn_back_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_back_abs_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_btn_mod_modifier_clicked            (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeviewmenu_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_btn_abs_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_actualiser_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_back_fonction_clicked               (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_result_search_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_result_search_final_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_back_ajo_btn_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_back_from_search_clicked            (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_back_modify_btn_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data);
