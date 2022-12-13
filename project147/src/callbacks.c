#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "utilisateur.h"

int type,choix;
utilisateur uSupp;
utilisateur ToUse;
char ch[20];
void
on_radiobuttonFemme_ajout_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON (togglebutton)))
type=2;
}


void
on_radiobuttonHomme_ajout_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON (togglebutton)))
type=1;
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
on_buttonAfficher_user_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
utilisateur u;
GtkWidget *fenetre_ajout_user;
GtkWidget *fenetre_afficher_user;
GtkWidget *treeview_user;

fenetre_ajout_user = lookup_widget(objet,"ajout_user");
gtk_widget_destroy(fenetre_ajout_user);
gtk_widget_hide(fenetre_ajout_user);

fenetre_afficher_user=lookup_widget(objet,"afficher_user");
fenetre_afficher_user=create_afficher_user();

gtk_widget_show(fenetre_afficher_user);

treeview_user=lookup_widget(fenetre_afficher_user,"treeview_user");
afficher_user(treeview_user,"utilisateur.txt");

}


void
on_buttonValide_user_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
/*GtkWidget *nom;
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
num_bv=lookup_widget(objet,"spinbuttonNumbv_user");
vote=lookup_widget(objet,"spinbuttonVote_user");
profession=lookup_widget(objet,"comboboxProf_user");
appartenance=lookup_widget(objet,"comboboxApp_obs");

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
strcpy(u.app_politique_obs,gtk_combo_box_get_active_text(GTK_COMBO_BOX(appartenance)));
strcpy(u.profession_obs,gtk_combo_box_get_active_text(GTK_COMBO_BOX(profession)));

	if(type==1)
	strcpy(u.genre_user,"Homme");
	if(type==2)
	strcpy(u.genre_user,"Femme");
	if(choix==1)
	strcpy(u.nationalite_obs,"Tunisienne");
	if(choix==2)
	strcpy(u.nationalite_obs,"Etrangere");

if (strcmp(u.role_user,"observateur")!=0)

		{
			strcpy(u.nationalite_obs,"-1");
			strcpy(u.profession_obs,"-1");
			strcpy(u.app_politique_obs,"-1");}


ajout_user("utilisateur.txt",u,choix,type);
/*if(u.cin_user=="")strcpy(u.cin_user,ToUse.cin_user);
if((strcmp(u.genre_user,"Homme")!=0)&&(strcmp(u.genre_user,"Femme")))strcpy(u.genre_user,ToUse.genre_user);





if(EXIST(u.cin_user)==0) ajout_user("utilisateur.txt",u,choix,type);
else {
if (strcmp(u.role_user,"observateur")!=0)

		{
			strcpy(u.nationalite_obs,"-1");
			strcpy(u.profession_obs,"-1");
			strcpy(u.app_politique_obs,"-1");
	 	}
		
modifier_user("utilisateur.txt",u.cin_user,u,choix,type);}*/
GtkWidget *nom1;
GtkWidget *prenom1;
GtkWidget *jour1;
GtkWidget *mois1;
GtkWidget *annee1;
GtkWidget *cin1;
GtkWidget *role1;
GtkWidget *num_bv1;
GtkWidget *vote1;
GtkWidget *profession1;
GtkWidget *appartenance1;
ToUse=chercher_user("utilisateur.txt",uSupp.cin_user);

utilisateur u;



//associer les objets avec des variables

nom1=lookup_widget(objet,"entryNom_user");
prenom1=lookup_widget(objet,"entryPrenom_user");
jour1=lookup_widget(objet,"spinbuttonJour_user");
mois1=lookup_widget(objet,"spinbuttonMois_user");
annee1=lookup_widget(objet,"spinbuttonAnnee_user");
cin1=lookup_widget(objet,"entryCin_user");
role1=lookup_widget(objet,"comboboxRole_user");
num_bv1=lookup_widget(objet,"spinbuttonNumbv_user");
vote1=lookup_widget(objet,"spinbuttonVote_user");
profession1=lookup_widget(objet,"comboboxProf_user");
appartenance1=lookup_widget(objet,"comboboxApp_obs");

//recuperer les valeurs de entry
strcpy(u.nom_user,gtk_entry_get_text(GTK_ENTRY(nom1)));
strcpy(u.prenom_user,gtk_entry_get_text(GTK_ENTRY(prenom1)));
strcpy(u.cin_user,gtk_entry_get_text(GTK_ENTRY(cin1)));
strcpy(u.profession_obs,gtk_combo_box_get_active_text(GTK_COMBO_BOX(profession1)));






//recuperer les valeurs de spin button


u.date.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(jour1));
u.date.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(mois1));
u.date.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(annee1));
u.num_bv_user=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(num_bv1));
u.vote_user=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(vote1));


//recuperer les valeurs de combobox

strcpy(u.role_user,gtk_combo_box_get_active_text(GTK_COMBO_BOX(role1)));
strcpy(u.app_politique_obs,gtk_combo_box_get_active_text(GTK_COMBO_BOX(appartenance1)));


	if(type==1)
	strcpy(u.genre_user,"Homme");
	if(type==2)
	strcpy(u.genre_user,"Femme");
	if(choix=1)
	strcpy(u.nationalite_obs,"Tunisienne");
	if(choix==2)
	strcpy(u.nationalite_obs,"Etrangere");

	/*if(strcmp(u.role_user,"observateur")!=0)
	gtk_widget_hide(profession1);
	gtk_widget_hide(appartenance1);*/


//checkbox

//radio button


/*if(u.cin_user=="")strcpy(u.cin_user,ToUse.cin_user);
if((strcmp(u.genre_user,"Homme")!=0)&&(strcmp(u.genre_user,"Femme")))strcpy(u.genre_user,ToUse.genre_user);
if((strcmp(u.nationalite_obs,"Tunisienne")!=0)&&(strcmp(u.genre_user,"Etrangere")))strcpy(u.nationalite_obs,ToUse.nationalite_obs);
if(strcmp(u.profession_obs,"-1")==0)strcpy(u.profession_obs,ToUse.profession_obs);*/




if(verif_EXIST(u.cin_user)==0) ajout_user("utilisateur.txt",u,choix,type);
else modifier_user("utilisateur.txt",u.cin_user,u,choix,type);

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
on_refresh_user_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
utilisateur u;
GtkWidget *w1;
GtkWidget *fenetre_afficher_user;
GtkWidget *treeview_user;

w1=lookup_widget(objet,"afficher_user");
fenetre_afficher_user=create_afficher_user();

gtk_widget_hide(fenetre_afficher_user);
gtk_widget_hide(w1);

gtk_widget_show(fenetre_afficher_user);

treeview_user=lookup_widget(fenetre_afficher_user,"treeview_user");
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
on_button_Rech_user_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
utilisateur u;
GtkWidget *fenetre_afficher,*w1;

GtkWidget *treeview;
GtkWidget *commentaire;
GtkWidget  *id_entry;
char id[20];
char role[20];
id_entry = lookup_widget (objet,"entryRech_user");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(id_entry)));
//strcpy(role,gtk_entry_get_text(GTK_ENTRY(id_entry)));

u=chercher_user("utilisateur.txt",id);

FILE *f=fopen("search.txt","w");
	if(f!=NULL)
{		
		fprintf(f,"%s %s %d %d %d %s %s %s %d %d %s %s %s \n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.num_bv_user,u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs);}
		
	fclose(f);


w1=lookup_widget(objet,"afficher_user");
fenetre_afficher=create_afficher_user();
gtk_widget_hide(fenetre_afficher);
gtk_widget_hide(w1);
gtk_widget_show(fenetre_afficher);
treeview=lookup_widget(fenetre_afficher,"treeview_user");
afficher_user(treeview,"search.txt");
if (strcmp(u.cin_user,id)!=0){
commentaire=lookup_widget(fenetre_afficher,"commentaire");
gtk_widget_show(commentaire);
gtk_widget_hide(treeview);}
else{ 
commentaire=lookup_widget(fenetre_afficher,"commentaire");

afficher_user(treeview,"search.txt");}
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


treeview_user=lookup_widget(fenetre_afficher_user,"treeview_user");
afficher_user(treeview_user,"utilisateur.txt");
}


void
on_buttonModifier_user_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
utilisateur u;
GtkWidget *nom;
GtkWidget *prenom;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *cin;
GtkWidget *role;
GtkWidget *num;
GtkWidget *vote;
GtkWidget *profession;
GtkWidget *appartenance;
GtkWidget *fenetre;
GtkWidget *homme;
GtkWidget *femme;
GtkWidget *tunisian;
GtkWidget *etrangere;

GtkWidget *fenetre_ajout_user;
GtkWidget *fenetre_afficher_user;
GtkWidget *treeview_user;

fenetre_afficher_user = lookup_widget(objet,"afficher_user");
gtk_widget_hide(fenetre_afficher_user);


fenetre_ajout_user=lookup_widget(objet,"ajout_user");
fenetre_ajout_user=create_ajout_user();
gtk_widget_show(fenetre_ajout_user);


utilisateur user=chercher_user("utilisateur.txt",uSupp.cin_user);

nom=lookup_widget(fenetre_ajout_user,"entryNom_user");
prenom=lookup_widget(fenetre_ajout_user,"entryPrenom_user");
jour=lookup_widget(fenetre_ajout_user,"spinbuttonJour_user");
mois=lookup_widget(fenetre_ajout_user,"spinbuttonMois_user");
annee=lookup_widget(fenetre_ajout_user,"spinbuttonAnnee_user");
cin=lookup_widget(fenetre_ajout_user,"entryCin_user");
role=lookup_widget(fenetre_ajout_user,"comboboxRole_user");
num=lookup_widget(fenetre_ajout_user,"spinbuttonNumbv_user");
profession=lookup_widget(fenetre_ajout_user,"comboboxProf_user");
appartenance=lookup_widget(fenetre_ajout_user,"comboboxApp_obs");
homme=lookup_widget(fenetre_ajout_user,"radiobuttonHomme_ajout");
femme=lookup_widget(fenetre_ajout_user,"radiobuttonFemme_ajout");
tunisian=lookup_widget(fenetre_ajout_user,"checkbuttonTun_obs");
etrangere=lookup_widget(fenetre_ajout_user,"checkbuttonEtr_obs");


gtk_entry_set_text(GTK_ENTRY(nom),user.nom_user);
gtk_entry_set_text(GTK_ENTRY(prenom),user.prenom_user);
gtk_entry_set_text(GTK_ENTRY(cin),user.cin_user);
gtk_entry_set_text(GTK_ENTRY(profession),user.profession_obs);
int i;
if(strcmp(user.app_politique_obs,"gauche")==0)i=0;
if(strcmp(user.app_politique_obs,"droite")==0)i=1;
if(strcmp(user.app_politique_obs,"autre")==0)i=2;


 gtk_combo_box_set_active(GTK_COMBO_BOX(appartenance),i);






int j;
if(strcmp(user.role_user,"observateur")==0)j=0;
if(strcmp(user.role_user,"electeur")==0)j=1;
if(strcmp(user.role_user,"admin")==0)j=2;
if(strcmp(user.role_user,"agentBV")==0)j=3;
if(strcmp(user.role_user,"autres")==0)j=4;

 gtk_combo_box_set_active(GTK_COMBO_BOX(role),j);
	 gtk_spin_button_set_value(jour,user.date.jour);
	 gtk_spin_button_set_value(mois,user.date.mois);
	 gtk_spin_button_set_value(annee,user.date.annee);




int k;
if(strcmp(user.profession_obs,"professeur")==0)k=0;
if(strcmp(user.profession_obs,"etudiant/e")==0)k=1;
if(strcmp(user.profession_obs,"journaliste")==0)k=2;
if(strcmp(user.profession_obs,"ingenieur")==0)k=3;
if(strcmp(user.profession_obs,"directeur/ice")==0)k=4;
if(strcmp(user.profession_obs,"medecin")==0)k=5;
if(strcmp(user.profession_obs,"technicien/ne")==0)k=6;
if(strcmp(user.profession_obs,"avocat/e")==0)k=8;
if(strcmp(user.profession_obs,"politicien/ne")==0)k=9;
if(strcmp(user.profession_obs,"autre")==0)k=10;


 gtk_combo_box_set_active(GTK_COMBO_BOX(profession),j);
	 gtk_spin_button_set_value(jour,user.date.jour);
	 gtk_spin_button_set_value(mois,user.date.mois);
	 gtk_spin_button_set_value(annee,user.date.annee);

/*if(strcmp(u.role_user,"Observateur")!=0)
	gtk_widget_hide(profession);
	gtk_widget_hide(appartenance);*/


//if(strcmp(user.nationalite_obs,"Tunisienne")==0)
if (choix==1)
{   gtk_toggle_button_set_active(GTK_RADIO_BUTTON(tunisian),TRUE);
    gtk_toggle_button_set_active(GTK_RADIO_BUTTON(etrangere),FALSE);}

//if(strcmp(user.nationalite_obs,"Etrangere")==0)
if (choix==2)
 {   gtk_toggle_button_set_active(GTK_RADIO_BUTTON(etrangere),TRUE);
     gtk_toggle_button_set_active(GTK_RADIO_BUTTON(tunisian),FALSE);}
           
	else {   gtk_toggle_button_set_active(GTK_CHECK_BUTTON(tunisian),FALSE); gtk_toggle_button_set_active(GTK_CHECK_BUTTON(etrangere),FALSE);}
if(strcmp(user.genre_user,"Homme")==0) {
	type=1;
	gtk_toggle_button_set_active(GTK_RADIO_BUTTON(homme),TRUE);
	gtk_toggle_button_set_active(GTK_RADIO_BUTTON(femme),FALSE);}
if(strcmp(user.genre_user,"Femme")==0) {
	gtk_toggle_button_set_active(GTK_RADIO_BUTTON(femme),TRUE);
	gtk_toggle_button_set_active(GTK_RADIO_BUTTON(homme),FALSE);}


	 gtk_spin_button_set_value(num,user.num_bv_user);
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
on_buttonStat_user_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
utilisateur u;
GtkWidget *fenetre_statistique;
GtkWidget *fenetre_afficher_user;

fenetre_afficher_user=lookup_widget(objet,"afficher_user");
gtk_widget_hide(fenetre_afficher_user);
fenetre_statistique=create_statistique();
gtk_widget_show(fenetre_statistique);
}


void
on_buttonAff_stat_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *VB;
GtkWidget *TH;
GtkWidget *TF;
VB=lookup_widget(objet,"TVB");
TH=lookup_widget(objet,"THF");
TF=lookup_widget(objet,"taux");
char tph[20],tpf[20],tvb[20];
float h=TPHF("utilisateur.txt",type);
float Tvb=TVB("utilisateur.txt");
float f= TPF ("utilisateur.txt",type);
sprintf(tph,"%.2f",h);
strcat(tph,"%");
sprintf(tpf,"%.2f",f);
strcat(tpf,"%");
sprintf(tvb,"%.2f",Tvb);
strcat(tvb,"%");
gtk_label_set_text(GTK_LABEL(VB),tvb);
//gtk_label_set_text(GTK_LABEL(TH),tph);
//gtk_label_set_text(GTK_LABEL(TF),tpf);
gtk_widget_show(TF);
gtk_widget_show(TH);



}


void
on_buttonPrec_stat_clicked             (GtkWidget      *objet,
                                        gpointer         user_data)
{
utilisateur u;
GtkWidget *fenetre_statistique;
GtkWidget *fenetre_afficher_user;
GtkWidget *treeview_user;

fenetre_statistique=lookup_widget(objet,"statistique");
gtk_widget_hide(fenetre_statistique);
fenetre_afficher_user=create_afficher_user();
gtk_widget_show(fenetre_afficher_user);

treeview_user=lookup_widget(fenetre_afficher_user,"treeview_user");

afficher_user(treeview_user,"utilisateur.txt");
}

