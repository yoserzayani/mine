#ifndef UTILISATEUR_H_INCLUDED
#define UTILISATEUR_H_INCLUDED
#include <stdio.h>
typedef struct
{
	int jour;
	int mois;
	int annee;
} date_user;
typedef struct 
{
	char nom_user[50];
	char prenom_user[50];
	date_user date;
	int cin_user;
	char role_user[50];
	char genre_user[50];
	int num_bv_user;
	int vote_user;
	char nationalite_obs[50];
	char app_politique_obs[50];
	char profession_obs[50];	
}utilisateur;
int ajout_user(char * fileuser,utilisateur u);
int modifier_user(char * fileuser,int id,utilisateur nouv);
int supprimer_user(char * fileuser, int cin);
utilisateur chercher_user(char * fileuser,int cin);
#endif

