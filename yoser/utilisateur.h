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
	char role_user[50];
	char genre_user[50];
	char nationalite_obs[50];
	char app_politique_obs[50];
	int cin_user;
	int num_bv_user;
	int vote_user;
	date_user date;
}utilisateur;
int ajout_user(char * fileuser,utilisateur u);
int modifier_user(char * fileuser,int cin,utilisateur nouv);
int supprimer_user(char * fileuser, int cin);
utilisateur chercher(char * fileuser,int cin);
#endif
