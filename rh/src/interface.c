/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_menu (void)
{
  GtkWidget *menu;
  GtkWidget *fixed1;
  GtkWidget *rh;
  GtkWidget *treeviewmenu;
  GtkWidget *btn_modify;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image2;
  GtkWidget *label14;
  GtkWidget *btn_inscrit;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image5;
  GtkWidget *label18;
  GtkWidget *btn_absence;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image4;
  GtkWidget *label16;
  GtkWidget *actualiser;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image12;
  GtkWidget *label53;
  GtkWidget *btn_search;
  GtkWidget *alignment12;
  GtkWidget *hbox12;
  GtkWidget *image14;
  GtkWidget *label55;

  menu = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (menu), _("menu"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (menu), fixed1);

  rh = gtk_label_new_with_mnemonic (_("Ressource humaine"));
  gtk_widget_show (rh);
  gtk_fixed_put (GTK_FIXED (fixed1), rh, 400, 40);
  gtk_widget_set_size_request (rh, 200, 40);
  gtk_label_set_width_chars (GTK_LABEL (rh), 1);

  treeviewmenu = gtk_tree_view_new ();
  gtk_widget_show (treeviewmenu);
  gtk_fixed_put (GTK_FIXED (fixed1), treeviewmenu, 144, 88);
  gtk_widget_set_size_request (treeviewmenu, 704, 320);

  btn_modify = gtk_button_new ();
  gtk_widget_show (btn_modify);
  gtk_fixed_put (GTK_FIXED (fixed1), btn_modify, 888, 168);
  gtk_widget_set_size_request (btn_modify, 128, 40);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (btn_modify), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image2 = gtk_image_new_from_stock ("gtk-indent", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox1), image2, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox1), label14, FALSE, FALSE, 0);

  btn_inscrit = gtk_button_new ();
  gtk_widget_show (btn_inscrit);
  gtk_fixed_put (GTK_FIXED (fixed1), btn_inscrit, 888, 112);
  gtk_widget_set_size_request (btn_inscrit, 128, 40);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (btn_inscrit), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image5 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox4), image5, FALSE, FALSE, 0);

  label18 = gtk_label_new_with_mnemonic (_("inscription"));
  gtk_widget_show (label18);
  gtk_box_pack_start (GTK_BOX (hbox4), label18, FALSE, FALSE, 0);

  btn_absence = gtk_button_new ();
  gtk_widget_show (btn_absence);
  gtk_fixed_put (GTK_FIXED (fixed1), btn_absence, 888, 224);
  gtk_widget_set_size_request (btn_absence, 128, 40);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (btn_absence), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image4 = gtk_image_new_from_stock ("gtk-stop", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox3), image4, FALSE, FALSE, 0);

  label16 = gtk_label_new_with_mnemonic (_("absence"));
  gtk_widget_show (label16);
  gtk_box_pack_start (GTK_BOX (hbox3), label16, FALSE, FALSE, 0);

  actualiser = gtk_button_new ();
  gtk_widget_show (actualiser);
  gtk_fixed_put (GTK_FIXED (fixed1), actualiser, 888, 280);
  gtk_widget_set_size_request (actualiser, 128, 40);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (actualiser), alignment10);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox10);

  image12 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_box_pack_start (GTK_BOX (hbox10), image12, FALSE, FALSE, 0);

  label53 = gtk_label_new_with_mnemonic (_("actualiser"));
  gtk_widget_show (label53);
  gtk_box_pack_start (GTK_BOX (hbox10), label53, FALSE, FALSE, 0);

  btn_search = gtk_button_new ();
  gtk_widget_show (btn_search);
  gtk_fixed_put (GTK_FIXED (fixed1), btn_search, 888, 336);
  gtk_widget_set_size_request (btn_search, 128, 40);

  alignment12 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment12);
  gtk_container_add (GTK_CONTAINER (btn_search), alignment12);

  hbox12 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox12);
  gtk_container_add (GTK_CONTAINER (alignment12), hbox12);

  image14 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image14);
  gtk_box_pack_start (GTK_BOX (hbox12), image14, FALSE, FALSE, 0);

  label55 = gtk_label_new_with_mnemonic (_("Recherche"));
  gtk_widget_show (label55);
  gtk_box_pack_start (GTK_BOX (hbox12), label55, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) treeviewmenu, "row_activated",
                    G_CALLBACK (on_treeviewmenu_row_activated),
                    NULL);
  g_signal_connect ((gpointer) btn_modify, "clicked",
                    G_CALLBACK (on_btn_modify_clicked),
                    NULL);
  g_signal_connect ((gpointer) btn_inscrit, "clicked",
                    G_CALLBACK (on_btn_inscrit_clicked),
                    NULL);
  g_signal_connect ((gpointer) btn_absence, "clicked",
                    G_CALLBACK (on_btn_absence_clicked),
                    NULL);
  g_signal_connect ((gpointer) actualiser, "clicked",
                    G_CALLBACK (on_actualiser_clicked),
                    NULL);
  g_signal_connect ((gpointer) btn_search, "clicked",
                    G_CALLBACK (on_btn_search_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (menu, menu, "menu");
  GLADE_HOOKUP_OBJECT (menu, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (menu, rh, "rh");
  GLADE_HOOKUP_OBJECT (menu, treeviewmenu, "treeviewmenu");
  GLADE_HOOKUP_OBJECT (menu, btn_modify, "btn_modify");
  GLADE_HOOKUP_OBJECT (menu, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (menu, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (menu, image2, "image2");
  GLADE_HOOKUP_OBJECT (menu, label14, "label14");
  GLADE_HOOKUP_OBJECT (menu, btn_inscrit, "btn_inscrit");
  GLADE_HOOKUP_OBJECT (menu, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (menu, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (menu, image5, "image5");
  GLADE_HOOKUP_OBJECT (menu, label18, "label18");
  GLADE_HOOKUP_OBJECT (menu, btn_absence, "btn_absence");
  GLADE_HOOKUP_OBJECT (menu, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (menu, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (menu, image4, "image4");
  GLADE_HOOKUP_OBJECT (menu, label16, "label16");
  GLADE_HOOKUP_OBJECT (menu, actualiser, "actualiser");
  GLADE_HOOKUP_OBJECT (menu, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (menu, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (menu, image12, "image12");
  GLADE_HOOKUP_OBJECT (menu, label53, "label53");
  GLADE_HOOKUP_OBJECT (menu, btn_search, "btn_search");
  GLADE_HOOKUP_OBJECT (menu, alignment12, "alignment12");
  GLADE_HOOKUP_OBJECT (menu, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (menu, image14, "image14");
  GLADE_HOOKUP_OBJECT (menu, label55, "label55");

  return menu;
}

GtkWidget*
create_ajouter (void)
{
  GtkWidget *ajouter;
  GtkWidget *table1;
  GtkWidget *input_id;
  GtkWidget *input_nom;
  GtkWidget *input_prenom;
  GtkWidget *input_dtn;
  GtkWidget *input_email;
  GtkWidget *input_pass;
  GtkWidget *input_tel;
  GtkWidget *id;
  GtkWidget *nom;
  GtkWidget *prenom;
  GtkWidget *label22;
  GtkWidget *label23;
  GtkWidget *label25;
  GtkWidget *label26;
  GtkWidget *label27;
  GtkWidget *fixed2;
  GtkWidget *btn_ajouter;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image6;
  GtkWidget *label29;
  GtkWidget *back_ajo_btn;
  GtkWidget *alignment16;
  GtkWidget *hbox16;
  GtkWidget *image18;
  GtkWidget *label60;
  GtkWidget *fixed3;
  GtkWidget *input_poste;

  ajouter = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (ajouter), _("ajouter"));

  table1 = gtk_table_new (9, 2, FALSE);
  gtk_widget_show (table1);
  gtk_container_add (GTK_CONTAINER (ajouter), table1);

  input_id = gtk_entry_new ();
  gtk_widget_show (input_id);
  gtk_table_attach (GTK_TABLE (table1), input_id, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_id), 8226);

  input_nom = gtk_entry_new ();
  gtk_widget_show (input_nom);
  gtk_table_attach (GTK_TABLE (table1), input_nom, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_nom), 8226);

  input_prenom = gtk_entry_new ();
  gtk_widget_show (input_prenom);
  gtk_table_attach (GTK_TABLE (table1), input_prenom, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_prenom), 8226);

  input_dtn = gtk_entry_new ();
  gtk_widget_show (input_dtn);
  gtk_table_attach (GTK_TABLE (table1), input_dtn, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_dtn), 8226);

  input_email = gtk_entry_new ();
  gtk_widget_show (input_email);
  gtk_table_attach (GTK_TABLE (table1), input_email, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_email), 8226);

  input_pass = gtk_entry_new ();
  gtk_widget_show (input_pass);
  gtk_table_attach (GTK_TABLE (table1), input_pass, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_pass), 8226);

  input_tel = gtk_entry_new ();
  gtk_widget_show (input_tel);
  gtk_table_attach (GTK_TABLE (table1), input_tel, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_tel), 8226);

  id = gtk_label_new (_("              id"));
  gtk_widget_show (id);
  gtk_table_attach (GTK_TABLE (table1), id, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (id), 0, 0.5);

  nom = gtk_label_new (_("          Nom"));
  gtk_widget_show (nom);
  gtk_table_attach (GTK_TABLE (table1), nom, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (nom), 0, 0.5);

  prenom = gtk_label_new (_("        Prenon      "));
  gtk_widget_show (prenom);
  gtk_table_attach (GTK_TABLE (table1), prenom, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (prenom), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (prenom), 0, 0.5);

  label22 = gtk_label_new (_("Date de naissance"));
  gtk_widget_show (label22);
  gtk_table_attach (GTK_TABLE (table1), label22, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label22), 0, 0.5);

  label23 = gtk_label_new (_("         Email"));
  gtk_widget_show (label23);
  gtk_table_attach (GTK_TABLE (table1), label23, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label23), 0, 0.5);

  label25 = gtk_label_new (_("      Telephone"));
  gtk_widget_show (label25);
  gtk_table_attach (GTK_TABLE (table1), label25, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label25), 0, 0.5);

  label26 = gtk_label_new (_("            Poste             "));
  gtk_widget_show (label26);
  gtk_table_attach (GTK_TABLE (table1), label26, 0, 1, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label26), 0, 0.5);

  label27 = gtk_label_new (_("   Mote de passe"));
  gtk_widget_show (label27);
  gtk_table_attach (GTK_TABLE (table1), label27, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label27), 0, 0.5);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_table_attach (GTK_TABLE (table1), fixed2, 1, 2, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  btn_ajouter = gtk_button_new ();
  gtk_widget_show (btn_ajouter);
  gtk_fixed_put (GTK_FIXED (fixed2), btn_ajouter, 192, 8);
  gtk_widget_set_size_request (btn_ajouter, 144, 56);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (btn_ajouter), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image6 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox5), image6, FALSE, FALSE, 0);

  label29 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label29);
  gtk_box_pack_start (GTK_BOX (hbox5), label29, FALSE, FALSE, 0);

  back_ajo_btn = gtk_button_new ();
  gtk_widget_show (back_ajo_btn);
  gtk_fixed_put (GTK_FIXED (fixed2), back_ajo_btn, 40, 16);
  gtk_widget_set_size_request (back_ajo_btn, 96, 37);

  alignment16 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment16);
  gtk_container_add (GTK_CONTAINER (back_ajo_btn), alignment16);

  hbox16 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox16);
  gtk_container_add (GTK_CONTAINER (alignment16), hbox16);

  image18 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image18);
  gtk_box_pack_start (GTK_BOX (hbox16), image18, FALSE, FALSE, 0);

  label60 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label60);
  gtk_box_pack_start (GTK_BOX (hbox16), label60, FALSE, FALSE, 0);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_table_attach (GTK_TABLE (table1), fixed3, 0, 1, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  input_poste = gtk_combo_box_entry_new_text ();
  gtk_widget_show (input_poste);
  gtk_table_attach (GTK_TABLE (table1), input_poste, 1, 2, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_combo_box_append_text (GTK_COMBO_BOX (input_poste), _("Agricole des equipements"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (input_poste), _("Agricole des tropeaux"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (input_poste), _("Financier"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (input_poste), _("Technicien des capteurs de temperatures"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (input_poste), _("Technicien des capteurs d'humidite"));

  g_signal_connect ((gpointer) btn_ajouter, "clicked",
                    G_CALLBACK (on_btn_ajouter_clicked),
                    NULL);
  g_signal_connect ((gpointer) back_ajo_btn, "clicked",
                    G_CALLBACK (on_back_ajo_btn_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ajouter, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (ajouter, table1, "table1");
  GLADE_HOOKUP_OBJECT (ajouter, input_id, "input_id");
  GLADE_HOOKUP_OBJECT (ajouter, input_nom, "input_nom");
  GLADE_HOOKUP_OBJECT (ajouter, input_prenom, "input_prenom");
  GLADE_HOOKUP_OBJECT (ajouter, input_dtn, "input_dtn");
  GLADE_HOOKUP_OBJECT (ajouter, input_email, "input_email");
  GLADE_HOOKUP_OBJECT (ajouter, input_pass, "input_pass");
  GLADE_HOOKUP_OBJECT (ajouter, input_tel, "input_tel");
  GLADE_HOOKUP_OBJECT (ajouter, id, "id");
  GLADE_HOOKUP_OBJECT (ajouter, nom, "nom");
  GLADE_HOOKUP_OBJECT (ajouter, prenom, "prenom");
  GLADE_HOOKUP_OBJECT (ajouter, label22, "label22");
  GLADE_HOOKUP_OBJECT (ajouter, label23, "label23");
  GLADE_HOOKUP_OBJECT (ajouter, label25, "label25");
  GLADE_HOOKUP_OBJECT (ajouter, label26, "label26");
  GLADE_HOOKUP_OBJECT (ajouter, label27, "label27");
  GLADE_HOOKUP_OBJECT (ajouter, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (ajouter, btn_ajouter, "btn_ajouter");
  GLADE_HOOKUP_OBJECT (ajouter, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (ajouter, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (ajouter, image6, "image6");
  GLADE_HOOKUP_OBJECT (ajouter, label29, "label29");
  GLADE_HOOKUP_OBJECT (ajouter, back_ajo_btn, "back_ajo_btn");
  GLADE_HOOKUP_OBJECT (ajouter, alignment16, "alignment16");
  GLADE_HOOKUP_OBJECT (ajouter, hbox16, "hbox16");
  GLADE_HOOKUP_OBJECT (ajouter, image18, "image18");
  GLADE_HOOKUP_OBJECT (ajouter, label60, "label60");
  GLADE_HOOKUP_OBJECT (ajouter, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (ajouter, input_poste, "input_poste");

  return ajouter;
}

GtkWidget*
create_supprimer (void)
{
  GtkWidget *supprimer;
  GtkWidget *fixed4;
  GtkWidget *name_supp;
  GtkWidget *back_fonction;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image13;
  GtkWidget *label54;

  supprimer = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (supprimer), _("supprimer"));

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (supprimer), fixed4);

  name_supp = gtk_label_new (_("Fonction faite avec succes "));
  gtk_widget_show (name_supp);
  gtk_fixed_put (GTK_FIXED (fixed4), name_supp, 88, 56);
  gtk_widget_set_size_request (name_supp, 232, 56);

  back_fonction = gtk_button_new ();
  gtk_widget_show (back_fonction);
  gtk_fixed_put (GTK_FIXED (fixed4), back_fonction, 272, 168);
  gtk_widget_set_size_request (back_fonction, 104, 32);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (back_fonction), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image13 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image13);
  gtk_box_pack_start (GTK_BOX (hbox11), image13, FALSE, FALSE, 0);

  label54 = gtk_label_new_with_mnemonic (_("Retoure"));
  gtk_widget_show (label54);
  gtk_box_pack_start (GTK_BOX (hbox11), label54, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) back_fonction, "clicked",
                    G_CALLBACK (on_back_fonction_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (supprimer, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (supprimer, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (supprimer, name_supp, "name_supp");
  GLADE_HOOKUP_OBJECT (supprimer, back_fonction, "back_fonction");
  GLADE_HOOKUP_OBJECT (supprimer, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (supprimer, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (supprimer, image13, "image13");
  GLADE_HOOKUP_OBJECT (supprimer, label54, "label54");

  return supprimer;
}

GtkWidget*
create_absance (void)
{
  GtkWidget *absance;
  GtkWidget *fixed5;
  GtkWidget *_2021;
  GtkWidget *label32;
  GtkObject *spinannee_adj;
  GtkWidget *spinannee;
  GtkObject *spinmois_adj;
  GtkWidget *spinmois;
  GtkWidget *ab;
  GtkWidget *btn_abs;
  GtkWidget *alignment15;
  GtkWidget *hbox15;
  GtkWidget *image17;
  GtkWidget *label59;
  GtkWidget *back_abs;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image11;
  GtkWidget *label52;

  absance = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (absance), _("absance"));

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (absance), fixed5);
  gtk_widget_set_size_request (fixed5, 500, 500);

  _2021 = gtk_label_new ("");
  gtk_widget_show (_2021);
  gtk_fixed_put (GTK_FIXED (fixed5), _2021, 88, 256);
  gtk_widget_set_size_request (_2021, 72, 24);

  label32 = gtk_label_new (_("le taux d'absence :"));
  gtk_widget_show (label32);
  gtk_fixed_put (GTK_FIXED (fixed5), label32, 24, 16);
  gtk_widget_set_size_request (label32, 264, 40);

  spinannee_adj = gtk_adjustment_new (2017, 2017, 2021, 1, 10, 10);
  spinannee = gtk_spin_button_new (GTK_ADJUSTMENT (spinannee_adj), 1, 0);
  gtk_widget_show (spinannee);
  gtk_fixed_put (GTK_FIXED (fixed5), spinannee, 104, 136);
  gtk_widget_set_size_request (spinannee, 60, 27);

  spinmois_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  spinmois = gtk_spin_button_new (GTK_ADJUSTMENT (spinmois_adj), 1, 0);
  gtk_widget_show (spinmois);
  gtk_fixed_put (GTK_FIXED (fixed5), spinmois, 184, 136);
  gtk_widget_set_size_request (spinmois, 60, 27);

  ab = gtk_label_new ("");
  gtk_widget_show (ab);
  gtk_fixed_put (GTK_FIXED (fixed5), ab, 208, 208);
  gtk_widget_set_size_request (ab, 136, 48);

  btn_abs = gtk_button_new ();
  gtk_widget_show (btn_abs);
  gtk_fixed_put (GTK_FIXED (fixed5), btn_abs, 296, 136);
  gtk_widget_set_size_request (btn_abs, 88, 32);

  alignment15 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment15);
  gtk_container_add (GTK_CONTAINER (btn_abs), alignment15);

  hbox15 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox15);
  gtk_container_add (GTK_CONTAINER (alignment15), hbox15);

  image17 = gtk_image_new_from_stock ("gtk-ok", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image17);
  gtk_box_pack_start (GTK_BOX (hbox15), image17, FALSE, FALSE, 0);

  label59 = gtk_label_new_with_mnemonic (_("entree"));
  gtk_widget_show (label59);
  gtk_box_pack_start (GTK_BOX (hbox15), label59, FALSE, FALSE, 0);

  back_abs = gtk_button_new ();
  gtk_widget_show (back_abs);
  gtk_fixed_put (GTK_FIXED (fixed5), back_abs, 80, 432);
  gtk_widget_set_size_request (back_abs, 104, 29);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (back_abs), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image11 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox9), image11, FALSE, FALSE, 0);

  label52 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label52);
  gtk_box_pack_start (GTK_BOX (hbox9), label52, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) btn_abs, "clicked",
                    G_CALLBACK (on_btn_abs_clicked),
                    NULL);
  g_signal_connect ((gpointer) back_abs, "clicked",
                    G_CALLBACK (on_back_abs_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (absance, absance, "absance");
  GLADE_HOOKUP_OBJECT (absance, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (absance, _2021, "_2021");
  GLADE_HOOKUP_OBJECT (absance, label32, "label32");
  GLADE_HOOKUP_OBJECT (absance, spinannee, "spinannee");
  GLADE_HOOKUP_OBJECT (absance, spinmois, "spinmois");
  GLADE_HOOKUP_OBJECT (absance, ab, "ab");
  GLADE_HOOKUP_OBJECT (absance, btn_abs, "btn_abs");
  GLADE_HOOKUP_OBJECT (absance, alignment15, "alignment15");
  GLADE_HOOKUP_OBJECT (absance, hbox15, "hbox15");
  GLADE_HOOKUP_OBJECT (absance, image17, "image17");
  GLADE_HOOKUP_OBJECT (absance, label59, "label59");
  GLADE_HOOKUP_OBJECT (absance, back_abs, "back_abs");
  GLADE_HOOKUP_OBJECT (absance, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (absance, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (absance, image11, "image11");
  GLADE_HOOKUP_OBJECT (absance, label52, "label52");

  return absance;
}

GtkWidget*
create_modifier (void)
{
  GtkWidget *modifier;
  GtkWidget *table2;
  GtkWidget *input_mod_id;
  GtkWidget *input_mod_nom;
  GtkWidget *input_mod_prenom;
  GtkWidget *input_mod_email;
  GtkWidget *input_mod_tel;
  GtkWidget *label38;
  GtkWidget *label39;
  GtkWidget *label40;
  GtkWidget *label42;
  GtkWidget *label43;
  GtkWidget *fixed6;
  GtkWidget *btn_mod_modifier;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image9;
  GtkWidget *label46;
  GtkWidget *back_modify_btn;
  GtkWidget *alignment17;
  GtkWidget *hbox17;
  GtkWidget *image19;
  GtkWidget *label61;
  GtkWidget *fixed7;
  GtkWidget *fixed9;
  GtkWidget *fixed10;
  GtkWidget *fixed11;
  GtkWidget *fixed12;
  GtkWidget *fixed13;
  GtkWidget *fixed14;

  modifier = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (modifier), _("modifier"));

  table2 = gtk_table_new (9, 2, FALSE);
  gtk_widget_show (table2);
  gtk_container_add (GTK_CONTAINER (modifier), table2);

  input_mod_id = gtk_entry_new ();
  gtk_widget_show (input_mod_id);
  gtk_table_attach (GTK_TABLE (table2), input_mod_id, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_mod_id), 8226);

  input_mod_nom = gtk_entry_new ();
  gtk_widget_show (input_mod_nom);
  gtk_table_attach (GTK_TABLE (table2), input_mod_nom, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_mod_nom), 8226);

  input_mod_prenom = gtk_entry_new ();
  gtk_widget_show (input_mod_prenom);
  gtk_table_attach (GTK_TABLE (table2), input_mod_prenom, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_mod_prenom), 8226);

  input_mod_email = gtk_entry_new ();
  gtk_widget_show (input_mod_email);
  gtk_table_attach (GTK_TABLE (table2), input_mod_email, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_mod_email), 8226);

  input_mod_tel = gtk_entry_new ();
  gtk_widget_show (input_mod_tel);
  gtk_table_attach (GTK_TABLE (table2), input_mod_tel, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_mod_tel), 8226);

  label38 = gtk_label_new (_("              id"));
  gtk_widget_show (label38);
  gtk_table_attach (GTK_TABLE (table2), label38, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label38), 0, 0.5);

  label39 = gtk_label_new (_("          Nom"));
  gtk_widget_show (label39);
  gtk_table_attach (GTK_TABLE (table2), label39, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label39), 0, 0.5);

  label40 = gtk_label_new (_("        Prenon      "));
  gtk_widget_show (label40);
  gtk_table_attach (GTK_TABLE (table2), label40, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label40), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label40), 0, 0.5);

  label42 = gtk_label_new (_("         Email"));
  gtk_widget_show (label42);
  gtk_table_attach (GTK_TABLE (table2), label42, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label42), 0, 0.5);

  label43 = gtk_label_new (_("      Telephone"));
  gtk_widget_show (label43);
  gtk_table_attach (GTK_TABLE (table2), label43, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label43), 0, 0.5);

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_table_attach (GTK_TABLE (table2), fixed6, 1, 2, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  btn_mod_modifier = gtk_button_new ();
  gtk_widget_show (btn_mod_modifier);
  gtk_fixed_put (GTK_FIXED (fixed6), btn_mod_modifier, 208, 16);
  gtk_widget_set_size_request (btn_mod_modifier, 96, 32);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (btn_mod_modifier), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image9 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox7), image9, FALSE, FALSE, 0);

  label46 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label46);
  gtk_box_pack_start (GTK_BOX (hbox7), label46, FALSE, FALSE, 0);

  back_modify_btn = gtk_button_new ();
  gtk_widget_show (back_modify_btn);
  gtk_fixed_put (GTK_FIXED (fixed6), back_modify_btn, 56, 0);
  gtk_widget_set_size_request (back_modify_btn, 96, 32);

  alignment17 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment17);
  gtk_container_add (GTK_CONTAINER (back_modify_btn), alignment17);

  hbox17 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox17);
  gtk_container_add (GTK_CONTAINER (alignment17), hbox17);

  image19 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image19);
  gtk_box_pack_start (GTK_BOX (hbox17), image19, FALSE, FALSE, 0);

  label61 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label61);
  gtk_box_pack_start (GTK_BOX (hbox17), label61, FALSE, FALSE, 0);

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_table_attach (GTK_TABLE (table2), fixed7, 0, 1, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  fixed9 = gtk_fixed_new ();
  gtk_widget_show (fixed9);
  gtk_table_attach (GTK_TABLE (table2), fixed9, 0, 1, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  fixed10 = gtk_fixed_new ();
  gtk_widget_show (fixed10);
  gtk_table_attach (GTK_TABLE (table2), fixed10, 1, 2, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  fixed11 = gtk_fixed_new ();
  gtk_widget_show (fixed11);
  gtk_table_attach (GTK_TABLE (table2), fixed11, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  fixed12 = gtk_fixed_new ();
  gtk_widget_show (fixed12);
  gtk_table_attach (GTK_TABLE (table2), fixed12, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  fixed13 = gtk_fixed_new ();
  gtk_widget_show (fixed13);
  gtk_table_attach (GTK_TABLE (table2), fixed13, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  fixed14 = gtk_fixed_new ();
  gtk_widget_show (fixed14);
  gtk_table_attach (GTK_TABLE (table2), fixed14, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  g_signal_connect ((gpointer) btn_mod_modifier, "clicked",
                    G_CALLBACK (on_btn_mod_modifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) back_modify_btn, "clicked",
                    G_CALLBACK (on_back_modify_btn_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (modifier, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (modifier, table2, "table2");
  GLADE_HOOKUP_OBJECT (modifier, input_mod_id, "input_mod_id");
  GLADE_HOOKUP_OBJECT (modifier, input_mod_nom, "input_mod_nom");
  GLADE_HOOKUP_OBJECT (modifier, input_mod_prenom, "input_mod_prenom");
  GLADE_HOOKUP_OBJECT (modifier, input_mod_email, "input_mod_email");
  GLADE_HOOKUP_OBJECT (modifier, input_mod_tel, "input_mod_tel");
  GLADE_HOOKUP_OBJECT (modifier, label38, "label38");
  GLADE_HOOKUP_OBJECT (modifier, label39, "label39");
  GLADE_HOOKUP_OBJECT (modifier, label40, "label40");
  GLADE_HOOKUP_OBJECT (modifier, label42, "label42");
  GLADE_HOOKUP_OBJECT (modifier, label43, "label43");
  GLADE_HOOKUP_OBJECT (modifier, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (modifier, btn_mod_modifier, "btn_mod_modifier");
  GLADE_HOOKUP_OBJECT (modifier, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (modifier, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (modifier, image9, "image9");
  GLADE_HOOKUP_OBJECT (modifier, label46, "label46");
  GLADE_HOOKUP_OBJECT (modifier, back_modify_btn, "back_modify_btn");
  GLADE_HOOKUP_OBJECT (modifier, alignment17, "alignment17");
  GLADE_HOOKUP_OBJECT (modifier, hbox17, "hbox17");
  GLADE_HOOKUP_OBJECT (modifier, image19, "image19");
  GLADE_HOOKUP_OBJECT (modifier, label61, "label61");
  GLADE_HOOKUP_OBJECT (modifier, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (modifier, fixed9, "fixed9");
  GLADE_HOOKUP_OBJECT (modifier, fixed10, "fixed10");
  GLADE_HOOKUP_OBJECT (modifier, fixed11, "fixed11");
  GLADE_HOOKUP_OBJECT (modifier, fixed12, "fixed12");
  GLADE_HOOKUP_OBJECT (modifier, fixed13, "fixed13");
  GLADE_HOOKUP_OBJECT (modifier, fixed14, "fixed14");

  return modifier;
}

GtkWidget*
create_windowrecherche (void)
{
  GtkWidget *windowrecherche;
  GtkWidget *fixed8;
  GtkWidget *input_search_final;
  GtkWidget *result_search;
  GtkWidget *result_search_final;
  GtkWidget *alignment13;
  GtkWidget *hbox13;
  GtkWidget *image15;
  GtkWidget *label57;
  GtkWidget *back_from_search;
  GtkWidget *alignment14;
  GtkWidget *hbox14;
  GtkWidget *image16;
  GtkWidget *label58;

  windowrecherche = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (windowrecherche), _("recherche"));

  fixed8 = gtk_fixed_new ();
  gtk_widget_show (fixed8);
  gtk_container_add (GTK_CONTAINER (windowrecherche), fixed8);

  input_search_final = gtk_entry_new ();
  gtk_widget_show (input_search_final);
  gtk_fixed_put (GTK_FIXED (fixed8), input_search_final, 168, 48);
  gtk_widget_set_size_request (input_search_final, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (input_search_final), 8226);

  result_search = gtk_label_new ("");
  gtk_widget_show (result_search);
  gtk_fixed_put (GTK_FIXED (fixed8), result_search, 64, 120);
  gtk_widget_set_size_request (result_search, 440, 41);

  result_search_final = gtk_button_new ();
  gtk_widget_show (result_search_final);
  gtk_fixed_put (GTK_FIXED (fixed8), result_search_final, 360, 48);
  gtk_widget_set_size_request (result_search_final, 104, 40);

  alignment13 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment13);
  gtk_container_add (GTK_CONTAINER (result_search_final), alignment13);

  hbox13 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox13);
  gtk_container_add (GTK_CONTAINER (alignment13), hbox13);

  image15 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image15);
  gtk_box_pack_start (GTK_BOX (hbox13), image15, FALSE, FALSE, 0);

  label57 = gtk_label_new_with_mnemonic (_("Recherche"));
  gtk_widget_show (label57);
  gtk_box_pack_start (GTK_BOX (hbox13), label57, FALSE, FALSE, 0);

  back_from_search = gtk_button_new ();
  gtk_widget_show (back_from_search);
  gtk_fixed_put (GTK_FIXED (fixed8), back_from_search, 416, 240);
  gtk_widget_set_size_request (back_from_search, 88, 32);

  alignment14 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment14);
  gtk_container_add (GTK_CONTAINER (back_from_search), alignment14);

  hbox14 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox14);
  gtk_container_add (GTK_CONTAINER (alignment14), hbox14);

  image16 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image16);
  gtk_box_pack_start (GTK_BOX (hbox14), image16, FALSE, FALSE, 0);

  label58 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label58);
  gtk_box_pack_start (GTK_BOX (hbox14), label58, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) result_search_final, "clicked",
                    G_CALLBACK (on_result_search_final_clicked),
                    NULL);
  g_signal_connect ((gpointer) back_from_search, "clicked",
                    G_CALLBACK (on_back_from_search_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (windowrecherche, windowrecherche, "windowrecherche");
  GLADE_HOOKUP_OBJECT (windowrecherche, fixed8, "fixed8");
  GLADE_HOOKUP_OBJECT (windowrecherche, input_search_final, "input_search_final");
  GLADE_HOOKUP_OBJECT (windowrecherche, result_search, "result_search");
  GLADE_HOOKUP_OBJECT (windowrecherche, result_search_final, "result_search_final");
  GLADE_HOOKUP_OBJECT (windowrecherche, alignment13, "alignment13");
  GLADE_HOOKUP_OBJECT (windowrecherche, hbox13, "hbox13");
  GLADE_HOOKUP_OBJECT (windowrecherche, image15, "image15");
  GLADE_HOOKUP_OBJECT (windowrecherche, label57, "label57");
  GLADE_HOOKUP_OBJECT (windowrecherche, back_from_search, "back_from_search");
  GLADE_HOOKUP_OBJECT (windowrecherche, alignment14, "alignment14");
  GLADE_HOOKUP_OBJECT (windowrecherche, hbox14, "hbox14");
  GLADE_HOOKUP_OBJECT (windowrecherche, image16, "image16");
  GLADE_HOOKUP_OBJECT (windowrecherche, label58, "label58");

  return windowrecherche;
}

