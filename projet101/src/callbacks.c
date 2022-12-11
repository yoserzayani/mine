#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "utilisateur.h"

int type=0;
int choix =0;
utilisateur uSupp;
void
on_buttonValide_user_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *nom;
GtkWidget *prenom;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *cin;
GtkWidget *role;
GtkWidget *num_bv;
GtkWidget *vote;
GtkWidget *profession;
GtkWidget *appartenance;


utilisateur u;



//associer les objets avec des variables

nom=lookup_widget(objet,"entryNom_user");
prenom=lookup_widget(objet,"entryPrenom_user");
jour=lookup_widget(objet,"spinbuttonJour_user");
mois=lookup_widget(objet,"spinbuttonMois_user");
annee=lookup_widget(objet,"spinbuttonAnnee_user");
cin=lookup_widget(objet,"entryCin_user");
role=lookup_widget(objet,"comboboxRole_user");
num_bv=lookup_widget(objet,"spinbuttonNumBV_user");
vote=lookup_widget(objet,"spinbuttonVote_user");
/*profession=lookup_widget(objet,"comboboxProf_user");
appartenance=lookup_widget(objet,"comboboxApp_user");*/

//recuperer les valeurs de entry
strcpy(u.nom_user,gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(u.prenom_user,gtk_entry_get_text(GTK_ENTRY(prenom)));
strcpy(u.cin_user,gtk_entry_get_text(GTK_ENTRY(cin)));
//strcpy(u.profession_obs,gtk_entry_get_text(GTK_ENTRY(profession)));






//recuperer les valeurs de spin button


u.date.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(jour));
u.date.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(mois));
u.date.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(annee));
u.num_bv_user=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(num_bv));
u.vote_user=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(vote));


//recuperer les valeurs de combobox

strcpy(u.role_user,gtk_combo_box_get_active_text(GTK_COMBO_BOX(role)));
/*strcpy(u.app_politique_obs,gtk_combo_box_get_active_text(GTK_COMBO_BOX(appartenance)));
strcpy(u.profession_obs,gtk_combo_box_get_active_text(GTK_COMBO_BOX(profession)));*/


ajout_user("utilisateur.txt",u,type,choix);

}


void
on_buttonAfficher_user_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
utilisateur u;
GtkWidget *fenetre_ajout_user;
GtkWidget *fenetre_afficher_user;
GtkWidget *treeview_user;

fenetre_ajout_user = lookup_widget(objet,"ajout_user");
gtk_destroy_widget(fenetre_ajout_user);
gtk_widget_hide(fenetre_ajout_user);

fenetre_afficher_user=lookup_widget(objet,"afficher_user");
fenetre_afficher_user=create_afficher_user();

gtk_widget_show(fenetre_afficher_user);

treeview_user=lookup_widget(fenetre_afficher_user,"treeview_user");
afficher_user(treeview_user,"utilisateur.txt");

}


void
on_checkbuttonEtr_obs_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
choix=2;
}


void
on_checkbuttonTun_obs_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
choix=1;
}


void
on_radiobuttonFemme_user_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON (togglebutton)))
type=2;
}


void
on_radiobuttonHomme_user_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON (togglebutton)))
type=1;
}


void
on_comboboxApp_obs_move_active         (GtkComboBox     *combobox,
                                        GtkScrollType    arg1,
                                        gpointer         user_data)
{
utilisateur u;
strcpy(u.app_politique_obs,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)));
}


void
on_comboboxprof_user_move_active       (GtkComboBox     *combobox,
                                        GtkScrollType    arg1,
                                        gpointer         user_data)
{

}


void
on_treeview_user_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* nom;
gchar* prenom;
gint* jour;
gint* mois;
gint* annee;
gchar* cin;
gchar* role;
gchar* genre;
gint* numBV;
gint* vote;
gchar* nationalite;
gchar* appartenance;
gchar* profession;

utilisateur u;


GtkTreeModel *model=gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{
gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&nom,1,&prenom,2,&jour,3,&mois,4,&annee,5,&cin,6,&role,7,&genre,8,&numBV,9,&vote,10,&nationalite,11,&appartenance,12,&profession,-1);

strcpy(uSupp.nom_user,nom);
strcpy(uSupp.prenom_user,prenom);
uSupp.date.jour=jour;
uSupp.date.mois=mois;
uSupp.date.annee=annee;
strcpy(uSupp.cin_user,cin);
strcpy(uSupp.role_user,role);
strcpy(uSupp.genre_user,genre);
uSupp.num_bv_user=numBV;
uSupp.vote_user=vote;
strcpy(uSupp.nationalite_obs,nationalite);
strcpy(uSupp.app_politique_obs,appartenance);
strcpy(uSupp.profession_obs,profession);




afficher_user(treeview,"utilisateur.txt");
}
}

void
on_buttonAjout_user_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
utilisateur u;
GtkWidget *fenetre_ajout_user;
GtkWidget *fenetre_afficher_user;
GtkWidget *treeview_user;

fenetre_ajout_user = lookup_widget(objet,"ajout_user");

fenetre_afficher_user=lookup_widget(objet,"afficher_user");
gtk_widget_hide(fenetre_afficher_user);

fenetre_ajout_user=create_ajout_user();

gtk_widget_show(fenetre_ajout_user);
gtk_widget_destroy(fenetre_ajout_user);

treeview_user=lookup_widget(fenetre_afficher_user,"treeview_user");
afficher_user(treeview_user,"utilisateur.txt");


}


void
on_buttonModifier_user_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonSupp_user_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
supprimer_user("utilisateur.txt",uSupp.cin_user);
GtkWidget *fenetre_afficher,*w1;

GtkWidget *treeview_user;


w1=lookup_widget(objet,"afficher_user");
fenetre_afficher=create_afficher_user();
gtk_widget_hide(fenetre_afficher);
gtk_widget_hide(w1);

gtk_widget_show(fenetre_afficher);

treeview_user=lookup_widget(fenetre_afficher,"treeview_user");

afficher_user(treeview_user,"utilisateur.txt");




}


void
on_buttonPrec_user_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
utilisateur u;
GtkWidget *fenetre_ajout_user;
GtkWidget *fenetre_afficher_user;

fenetre_afficher_user=lookup_widget(objet,"afficher_user");
gtk_widget_hide(fenetre_afficher_user);
fenetre_ajout_user=create_ajout_user();
gtk_widget_show(fenetre_ajout_user);
}


void
on_button_Rech_user_clicked            (GtkWidget      *objet,
                                        gpointer         user_data)
{
utilisateur u;
GtkWidget *fenetre_afficher,*w1;

GtkWidget *treeview;

GtkWidget  *id_entry;
char id[10];
id_entry = lookup_widget (objet,"entryRech_user");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(id_entry)));

u=chercher_user("utilisateur.txt",id);
 FILE *f=fopen("search.txt","w");
if(f!=NULL)
{	
	fprintf(f,"%s %s %d %d %d %s %s %s %d %d %s %s %s \n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.num_bv_user,u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs);
}	
fclose(f);


w1=lookup_widget(objet,"afficher_user");
fenetre_afficher=create_afficher_user();
gtk_widget_hide(fenetre_afficher);
gtk_widget_hide(w1);
gtk_widget_show(fenetre_afficher);
treeview=lookup_widget(fenetre_afficher,"treeview_user");
afficher_user(treeview,"search.txt");

}

