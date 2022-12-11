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
create_ajout_user (void)
{
  GtkWidget *ajout_user;
  GtkWidget *fixed1;
  GtkWidget *entryNom_user;
  GtkWidget *entryPrenom_user;
  GtkObject *spinbuttonJour_user_adj;
  GtkWidget *spinbuttonJour_user;
  GtkObject *spinbuttonMois_user_adj;
  GtkWidget *spinbuttonMois_user;
  GtkObject *spinbuttonAnnee_user_adj;
  GtkWidget *spinbuttonAnnee_user;
  GtkWidget *entryCin_user;
  GtkObject *spinbuttonNumbv_user_adj;
  GtkWidget *spinbuttonNumbv_user;
  GtkObject *spinbuttonVote_user_adj;
  GtkWidget *spinbuttonVote_user;
  GtkWidget *buttonValider_user;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label1;
  GtkWidget *buttonAfficher_user;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label2;
  GtkWidget *comboboxRole_user;
  GtkWidget *label22;
  GtkWidget *label23;
  GtkWidget *label24;
  GtkWidget *label25;
  GtkWidget *label26;
  GtkWidget *label27;
  GtkWidget *label28;
  GtkWidget *label29;
  GtkWidget *label30;
  GtkWidget *label32;
  GtkWidget *label31;
  GtkWidget *radiobuttonFemme_ajout;
  GSList *radiobuttonFemme_ajout_group = NULL;
  GtkWidget *radiobuttonHomme_ajout;
  GtkWidget *checkbuttonEtr_obs;
  GtkWidget *checkbuttonTun_obs;
  GtkWidget *comboboxProf_user;
  GtkWidget *comboboxApp_obs;

  ajout_user = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (ajout_user), _("ajout_user"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (ajout_user), fixed1);

  entryNom_user = gtk_entry_new ();
  gtk_widget_show (entryNom_user);
  gtk_fixed_put (GTK_FIXED (fixed1), entryNom_user, 216, 48);
  gtk_widget_set_size_request (entryNom_user, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryNom_user), 8226);

  entryPrenom_user = gtk_entry_new ();
  gtk_widget_show (entryPrenom_user);
  gtk_fixed_put (GTK_FIXED (fixed1), entryPrenom_user, 216, 112);
  gtk_widget_set_size_request (entryPrenom_user, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryPrenom_user), 8226);

  spinbuttonJour_user_adj = gtk_adjustment_new (1, 1, 31, 0.5, 10, 10);
  spinbuttonJour_user = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonJour_user_adj), 0, 0);
  gtk_widget_show (spinbuttonJour_user);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbuttonJour_user, 304, 160);
  gtk_widget_set_size_request (spinbuttonJour_user, 60, 27);

  spinbuttonMois_user_adj = gtk_adjustment_new (1, 1, 12, 0.5, 10, 10);
  spinbuttonMois_user = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonMois_user_adj), 0, 0);
  gtk_widget_show (spinbuttonMois_user);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbuttonMois_user, 392, 160);
  gtk_widget_set_size_request (spinbuttonMois_user, 60, 27);

  spinbuttonAnnee_user_adj = gtk_adjustment_new (2000, 1910, 2020, 0.5, 10, 10);
  spinbuttonAnnee_user = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonAnnee_user_adj), 0, 0);
  gtk_widget_show (spinbuttonAnnee_user);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbuttonAnnee_user, 480, 160);
  gtk_widget_set_size_request (spinbuttonAnnee_user, 60, 27);

  entryCin_user = gtk_entry_new ();
  gtk_widget_show (entryCin_user);
  gtk_fixed_put (GTK_FIXED (fixed1), entryCin_user, 208, 216);
  gtk_widget_set_size_request (entryCin_user, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryCin_user), 8226);

  spinbuttonNumbv_user_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spinbuttonNumbv_user = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonNumbv_user_adj), 0, 0);
  gtk_widget_show (spinbuttonNumbv_user);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbuttonNumbv_user, 200, 400);
  gtk_widget_set_size_request (spinbuttonNumbv_user, 60, 27);

  spinbuttonVote_user_adj = gtk_adjustment_new (-1, -1, 1, 1, 10, 10);
  spinbuttonVote_user = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonVote_user_adj), 0, 0);
  gtk_widget_show (spinbuttonVote_user);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbuttonVote_user, 200, 448);
  gtk_widget_set_size_request (spinbuttonVote_user, 60, 27);

  buttonValider_user = gtk_button_new ();
  gtk_widget_show (buttonValider_user);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonValider_user, 480, 648);
  gtk_widget_set_size_request (buttonValider_user, 100, 29);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (buttonValider_user), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-yes", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label1 = gtk_label_new_with_mnemonic (_("Valider"));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

  buttonAfficher_user = gtk_button_new ();
  gtk_widget_show (buttonAfficher_user);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonAfficher_user, 616, 648);
  gtk_widget_set_size_request (buttonAfficher_user, 100, 29);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (buttonAfficher_user), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-open", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label2 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (hbox2), label2, FALSE, FALSE, 0);

  comboboxRole_user = gtk_combo_box_new_text ();
  gtk_widget_show (comboboxRole_user);
  gtk_fixed_put (GTK_FIXED (fixed1), comboboxRole_user, 208, 280);
  gtk_widget_set_size_request (comboboxRole_user, 180, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxRole_user), _("Admin"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxRole_user), _("observateur "));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxRole_user), _("electeur "));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxRole_user), _("agentBV"));

  label22 = gtk_label_new (_("Nom:"));
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed1), label22, 0, 56);
  gtk_widget_set_size_request (label22, 80, 17);

  label23 = gtk_label_new (_("Pr\303\251nom:"));
  gtk_widget_show (label23);
  gtk_fixed_put (GTK_FIXED (fixed1), label23, 0, 120);
  gtk_widget_set_size_request (label23, 90, 17);

  label24 = gtk_label_new (_("Date de naissance:"));
  gtk_widget_show (label24);
  gtk_fixed_put (GTK_FIXED (fixed1), label24, 0, 168);
  gtk_widget_set_size_request (label24, 150, 17);

  label25 = gtk_label_new (_("Cin:"));
  gtk_widget_show (label25);
  gtk_fixed_put (GTK_FIXED (fixed1), label25, 0, 224);
  gtk_widget_set_size_request (label25, 50, 17);

  label26 = gtk_label_new (_("R\303\264le:"));
  gtk_widget_show (label26);
  gtk_fixed_put (GTK_FIXED (fixed1), label26, 0, 288);
  gtk_widget_set_size_request (label26, 60, 17);

  label27 = gtk_label_new (_("Genre: "));
  gtk_widget_show (label27);
  gtk_fixed_put (GTK_FIXED (fixed1), label27, 0, 368);
  gtk_widget_set_size_request (label27, 70, 17);

  label28 = gtk_label_new (_("Num Bv:"));
  gtk_widget_show (label28);
  gtk_fixed_put (GTK_FIXED (fixed1), label28, 0, 408);
  gtk_widget_set_size_request (label28, 70, 17);

  label29 = gtk_label_new (_("Vote:"));
  gtk_widget_show (label29);
  gtk_fixed_put (GTK_FIXED (fixed1), label29, 0, 456);
  gtk_widget_set_size_request (label29, 50, 17);

  label30 = gtk_label_new (_("Appartenance politique:"));
  gtk_widget_show (label30);
  gtk_fixed_put (GTK_FIXED (fixed1), label30, 0, 496);
  gtk_widget_set_size_request (label30, 180, 17);

  label32 = gtk_label_new (_("Nationalit\303\251:"));
  gtk_widget_show (label32);
  gtk_fixed_put (GTK_FIXED (fixed1), label32, 0, 608);
  gtk_widget_set_size_request (label32, 90, 17);

  label31 = gtk_label_new (_("Profession:"));
  gtk_widget_show (label31);
  gtk_fixed_put (GTK_FIXED (fixed1), label31, 0, 552);
  gtk_widget_set_size_request (label31, 90, 17);

  radiobuttonFemme_ajout = gtk_radio_button_new_with_mnemonic (NULL, _("Femme"));
  gtk_widget_show (radiobuttonFemme_ajout);
  gtk_fixed_put (GTK_FIXED (fixed1), radiobuttonFemme_ajout, 352, 352);
  gtk_widget_set_size_request (radiobuttonFemme_ajout, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobuttonFemme_ajout), radiobuttonFemme_ajout_group);
  radiobuttonFemme_ajout_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobuttonFemme_ajout));

  radiobuttonHomme_ajout = gtk_radio_button_new_with_mnemonic (NULL, _("Homme"));
  gtk_widget_show (radiobuttonHomme_ajout);
  gtk_fixed_put (GTK_FIXED (fixed1), radiobuttonHomme_ajout, 200, 352);
  gtk_widget_set_size_request (radiobuttonHomme_ajout, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobuttonHomme_ajout), radiobuttonFemme_ajout_group);
  radiobuttonFemme_ajout_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobuttonHomme_ajout));

  checkbuttonEtr_obs = gtk_check_button_new_with_mnemonic (_("Etrangere"));
  gtk_widget_show (checkbuttonEtr_obs);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbuttonEtr_obs, 336, 600);
  gtk_widget_set_size_request (checkbuttonEtr_obs, 118, 24);

  checkbuttonTun_obs = gtk_check_button_new_with_mnemonic (_("Tunisienne"));
  gtk_widget_show (checkbuttonTun_obs);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbuttonTun_obs, 184, 600);
  gtk_widget_set_size_request (checkbuttonTun_obs, 118, 24);

  comboboxProf_user = gtk_combo_box_new_text ();
  gtk_widget_show (comboboxProf_user);
  gtk_fixed_put (GTK_FIXED (fixed1), comboboxProf_user, 200, 536);
  gtk_widget_set_size_request (comboboxProf_user, 177, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("professeur"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("etudiant/e"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("journaliste"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("ingenieur"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("directeur/ice"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("medecin "));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("technicien/ne"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("business man/woman"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("avocat/e"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("politicien/ne"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxProf_user), _("autre"));

  comboboxApp_obs = gtk_combo_box_new_text ();
  gtk_widget_show (comboboxApp_obs);
  gtk_fixed_put (GTK_FIXED (fixed1), comboboxApp_obs, 200, 488);
  gtk_widget_set_size_request (comboboxApp_obs, 176, 32);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxApp_obs), _("gauche "));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxApp_obs), _("droit "));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxApp_obs), _("autres"));
  gtk_combo_box_set_add_tearoffs (GTK_COMBO_BOX (comboboxApp_obs), TRUE);

  g_signal_connect ((gpointer) buttonValider_user, "clicked",
                    G_CALLBACK (on_buttonValide_user_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonAfficher_user, "clicked",
                    G_CALLBACK (on_buttonAfficher_user_clicked),
                    NULL);
  g_signal_connect ((gpointer) radiobuttonFemme_ajout, "toggled",
                    G_CALLBACK (on_radiobuttonFemme_ajout_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobuttonHomme_ajout, "toggled",
                    G_CALLBACK (on_radiobuttonHomme_ajout_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbuttonEtr_obs, "toggled",
                    G_CALLBACK (on_checkbuttonEtr_obs_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbuttonTun_obs, "toggled",
                    G_CALLBACK (on_checkbuttonTun_obs_toggled),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ajout_user, ajout_user, "ajout_user");
  GLADE_HOOKUP_OBJECT (ajout_user, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (ajout_user, entryNom_user, "entryNom_user");
  GLADE_HOOKUP_OBJECT (ajout_user, entryPrenom_user, "entryPrenom_user");
  GLADE_HOOKUP_OBJECT (ajout_user, spinbuttonJour_user, "spinbuttonJour_user");
  GLADE_HOOKUP_OBJECT (ajout_user, spinbuttonMois_user, "spinbuttonMois_user");
  GLADE_HOOKUP_OBJECT (ajout_user, spinbuttonAnnee_user, "spinbuttonAnnee_user");
  GLADE_HOOKUP_OBJECT (ajout_user, entryCin_user, "entryCin_user");
  GLADE_HOOKUP_OBJECT (ajout_user, spinbuttonNumbv_user, "spinbuttonNumbv_user");
  GLADE_HOOKUP_OBJECT (ajout_user, spinbuttonVote_user, "spinbuttonVote_user");
  GLADE_HOOKUP_OBJECT (ajout_user, buttonValider_user, "buttonValider_user");
  GLADE_HOOKUP_OBJECT (ajout_user, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (ajout_user, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (ajout_user, image1, "image1");
  GLADE_HOOKUP_OBJECT (ajout_user, label1, "label1");
  GLADE_HOOKUP_OBJECT (ajout_user, buttonAfficher_user, "buttonAfficher_user");
  GLADE_HOOKUP_OBJECT (ajout_user, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (ajout_user, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (ajout_user, image2, "image2");
  GLADE_HOOKUP_OBJECT (ajout_user, label2, "label2");
  GLADE_HOOKUP_OBJECT (ajout_user, comboboxRole_user, "comboboxRole_user");
  GLADE_HOOKUP_OBJECT (ajout_user, label22, "label22");
  GLADE_HOOKUP_OBJECT (ajout_user, label23, "label23");
  GLADE_HOOKUP_OBJECT (ajout_user, label24, "label24");
  GLADE_HOOKUP_OBJECT (ajout_user, label25, "label25");
  GLADE_HOOKUP_OBJECT (ajout_user, label26, "label26");
  GLADE_HOOKUP_OBJECT (ajout_user, label27, "label27");
  GLADE_HOOKUP_OBJECT (ajout_user, label28, "label28");
  GLADE_HOOKUP_OBJECT (ajout_user, label29, "label29");
  GLADE_HOOKUP_OBJECT (ajout_user, label30, "label30");
  GLADE_HOOKUP_OBJECT (ajout_user, label32, "label32");
  GLADE_HOOKUP_OBJECT (ajout_user, label31, "label31");
  GLADE_HOOKUP_OBJECT (ajout_user, radiobuttonFemme_ajout, "radiobuttonFemme_ajout");
  GLADE_HOOKUP_OBJECT (ajout_user, radiobuttonHomme_ajout, "radiobuttonHomme_ajout");
  GLADE_HOOKUP_OBJECT (ajout_user, checkbuttonEtr_obs, "checkbuttonEtr_obs");
  GLADE_HOOKUP_OBJECT (ajout_user, checkbuttonTun_obs, "checkbuttonTun_obs");
  GLADE_HOOKUP_OBJECT (ajout_user, comboboxProf_user, "comboboxProf_user");
  GLADE_HOOKUP_OBJECT (ajout_user, comboboxApp_obs, "comboboxApp_obs");

  return ajout_user;
}

GtkWidget*
create_afficher_user (void)
{
  GtkWidget *afficher_user;
  GtkWidget *fixed2;
  GtkWidget *treeview_user;
  GtkWidget *entryRech_user;
  GtkWidget *buttonRech_user;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label3;
  GtkWidget *buttonPrec_user;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label7;
  GtkWidget *commentaire;
  GtkWidget *buttonAjout_user;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label4;
  GtkWidget *buttonModifier_user;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label5;
  GtkWidget *buttonSupp_user;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label6;
  GtkWidget *refresh_user;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label33;

  afficher_user = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (afficher_user), _("afficher_user"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (afficher_user), fixed2);

  treeview_user = gtk_tree_view_new ();
  gtk_widget_show (treeview_user);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview_user, 0, 72);
  gtk_widget_set_size_request (treeview_user, 1280, 472);

  entryRech_user = gtk_entry_new ();
  gtk_widget_show (entryRech_user);
  gtk_fixed_put (GTK_FIXED (fixed2), entryRech_user, 112, 24);
  gtk_widget_set_size_request (entryRech_user, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryRech_user), 8226);

  buttonRech_user = gtk_button_new ();
  gtk_widget_show (buttonRech_user);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonRech_user, 288, 24);
  gtk_widget_set_size_request (buttonRech_user, 120, 27);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (buttonRech_user), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label3 = gtk_label_new_with_mnemonic (_("Rechercher"));
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (hbox3), label3, FALSE, FALSE, 0);

  buttonPrec_user = gtk_button_new ();
  gtk_widget_show (buttonPrec_user);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonPrec_user, 48, 552);
  gtk_widget_set_size_request (buttonPrec_user, 120, 29);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (buttonPrec_user), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label7 = gtk_label_new_with_mnemonic (_("Prec\303\251dent"));
  gtk_widget_show (label7);
  gtk_box_pack_start (GTK_BOX (hbox7), label7, FALSE, FALSE, 0);

  commentaire = gtk_label_new (_("utilisateur introuvable !!"));
  gtk_widget_show (commentaire);
  gtk_fixed_put (GTK_FIXED (fixed2), commentaire, 464, 24);
  gtk_widget_set_size_request (commentaire, 170, 27);

  buttonAjout_user = gtk_button_new ();
  gtk_widget_show (buttonAjout_user);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonAjout_user, 1304, 96);
  gtk_widget_set_size_request (buttonAjout_user, 120, 29);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (buttonAjout_user), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label4 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label4);
  gtk_box_pack_start (GTK_BOX (hbox4), label4, FALSE, FALSE, 0);

  buttonModifier_user = gtk_button_new ();
  gtk_widget_show (buttonModifier_user);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonModifier_user, 1304, 160);
  gtk_widget_set_size_request (buttonModifier_user, 120, 29);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (buttonModifier_user), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (hbox5), label5, FALSE, FALSE, 0);

  buttonSupp_user = gtk_button_new ();
  gtk_widget_show (buttonSupp_user);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonSupp_user, 1304, 224);
  gtk_widget_set_size_request (buttonSupp_user, 120, 29);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (buttonSupp_user), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label6 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label6);
  gtk_box_pack_start (GTK_BOX (hbox6), label6, FALSE, FALSE, 0);

  refresh_user = gtk_button_new ();
  gtk_widget_show (refresh_user);
  gtk_fixed_put (GTK_FIXED (fixed2), refresh_user, 200, 552);
  gtk_widget_set_size_request (refresh_user, 120, 29);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (refresh_user), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label33 = gtk_label_new_with_mnemonic (_("Actualiser"));
  gtk_widget_show (label33);
  gtk_box_pack_start (GTK_BOX (hbox8), label33, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) treeview_user, "row_activated",
                    G_CALLBACK (on_treeview_user_row_activated),
                    NULL);
  g_signal_connect ((gpointer) buttonRech_user, "clicked",
                    G_CALLBACK (on_button_Rech_user_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonPrec_user, "clicked",
                    G_CALLBACK (on_buttonPrec_user_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonAjout_user, "clicked",
                    G_CALLBACK (on_buttonAjout_user_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonModifier_user, "clicked",
                    G_CALLBACK (on_buttonModifier_user_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonSupp_user, "clicked",
                    G_CALLBACK (on_buttonSupp_user_clicked),
                    NULL);
  g_signal_connect ((gpointer) refresh_user, "clicked",
                    G_CALLBACK (on_refresh_user_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (afficher_user, afficher_user, "afficher_user");
  GLADE_HOOKUP_OBJECT (afficher_user, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (afficher_user, treeview_user, "treeview_user");
  GLADE_HOOKUP_OBJECT (afficher_user, entryRech_user, "entryRech_user");
  GLADE_HOOKUP_OBJECT (afficher_user, buttonRech_user, "buttonRech_user");
  GLADE_HOOKUP_OBJECT (afficher_user, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (afficher_user, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (afficher_user, image3, "image3");
  GLADE_HOOKUP_OBJECT (afficher_user, label3, "label3");
  GLADE_HOOKUP_OBJECT (afficher_user, buttonPrec_user, "buttonPrec_user");
  GLADE_HOOKUP_OBJECT (afficher_user, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (afficher_user, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (afficher_user, image7, "image7");
  GLADE_HOOKUP_OBJECT (afficher_user, label7, "label7");
  GLADE_HOOKUP_OBJECT (afficher_user, commentaire, "commentaire");
  GLADE_HOOKUP_OBJECT (afficher_user, buttonAjout_user, "buttonAjout_user");
  GLADE_HOOKUP_OBJECT (afficher_user, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (afficher_user, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (afficher_user, image4, "image4");
  GLADE_HOOKUP_OBJECT (afficher_user, label4, "label4");
  GLADE_HOOKUP_OBJECT (afficher_user, buttonModifier_user, "buttonModifier_user");
  GLADE_HOOKUP_OBJECT (afficher_user, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (afficher_user, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (afficher_user, image5, "image5");
  GLADE_HOOKUP_OBJECT (afficher_user, label5, "label5");
  GLADE_HOOKUP_OBJECT (afficher_user, buttonSupp_user, "buttonSupp_user");
  GLADE_HOOKUP_OBJECT (afficher_user, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (afficher_user, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (afficher_user, image6, "image6");
  GLADE_HOOKUP_OBJECT (afficher_user, label6, "label6");
  GLADE_HOOKUP_OBJECT (afficher_user, refresh_user, "refresh_user");
  GLADE_HOOKUP_OBJECT (afficher_user, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (afficher_user, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (afficher_user, image8, "image8");
  GLADE_HOOKUP_OBJECT (afficher_user, label33, "label33");

  return afficher_user;
}

