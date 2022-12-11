#include <gtk/gtk.h>


void
on_buttonValide_user_clicked           (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonAfficher_user_clicked         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_checkbuttonEtr_obs_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonTun_obs_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonFemme_user_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonHomme_user_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_comboboxApp_obs_move_active         (GtkComboBox     *combobox,
                                        GtkScrollType    arg1,
                                        gpointer         user_data);

void
on_comboboxprof_user_move_active       (GtkComboBox     *combobox,
                                        GtkScrollType    arg1,
                                        gpointer         user_data);

void
on_treeview_user_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_buttonAjout_user_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonModifier_user_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonSupp_user_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonPrec_user_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_Rech_user_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);
