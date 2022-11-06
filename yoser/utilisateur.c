#include <stdio.h>
#include "utilisateur.h"
#include <string.h>
int ajout_user(char * fileuser,utilisateur u)
{	FILE * f=fopen(fileuser,"a");
	if (f!=NULL)
	{	fprintf(f,"%s %s %d %d %d %d %s %s %s %s %d %d\n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.nationalite_obs,u.app_politique_obs,u.num_bv_user,u.vote_user);
		/*si role =observateur 
		 les case nationnalite/app_politique/profession s'ouvrent 
		 sinon ces cases sont eteinte */
	 
		fclose(f);
		return 1;
	}
	else return 0;
}


int modifier_user(char * fileuser,int cin,utilisateur nouv)
{	int trouve=0;
	utilisateur u;
	FILE * f=fopen(fileuser,"r");
	FILE * f2=fopen("nouv.txt","w");
	if(f!=NULL && f2!=NULL)
	{
		while(fscanf(f,"%s %s %d %d %d %d %s %s %s %s %d %d\n",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,u.nationalite_obs,u.app_politique_obs,&u.num_bv_user,&u.vote_user)!=EOF)
		{
			if(u.cin_user==cin)
			{

				(fprintf(f2,"%s %s %d %d %d %d %s %s %s %s %d %d\n",nouv.nom_user,nouv.prenom_user,nouv.date.jour,nouv.date.mois,nouv.date.annee,nouv.cin_user,nouv.role_user,nouv.genre_user,nouv.nationalite_obs,nouv.app_politique_obs,nouv.num_bv_user,nouv.vote_user));
				trouve=1;
			}
			else	
				fprintf(f2,"%s %s %d %d %d %d %s %s %s %s %d %d\n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.nationalite_obs,u.app_politique_obs,u.num_bv_user,u.vote_user);
		}
	}
	fclose(f);
	fclose(f2);
	remove(fileuser);
	rename("nouv.txt",fileuser);
	return trouve;
}

int supprimer_user(char * fileuser, int cin)
{
	int trouve=0;
	utilisateur u;
	FILE * f=fopen(fileuser,"r");
	FILE * f2=fopen("nouv.txt","w");
	if(f!=NULL && f2!=NULL)
	{
		while(fscanf(f,"%s %s %d %d %d %d %s %s %s %s %d %d\n",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,u.nationalite_obs,u.app_politique_obs,&u.num_bv_user,&u.vote_user)!=EOF)
		{
			if(u.cin_user==cin)
				trouve=1;
			else
				fprintf(f2,"%s %s %d %d %d %d %s %s %s %s %d %d\n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.nationalite_obs,u.app_politique_obs,u.num_bv_user,u.vote_user);
		}
	}
	fclose(f);
	fclose(f2);
	remove(fileuser);
	rename("nouv.txt",fileuser);
	return trouve;
}

utilisateur chercher(char * fileuser,int cin)
{
	utilisateur u;
	int trouve;
	FILE * f=fopen(fileuser,"r");
	if(f!=NULL)
	{
		while(trouve==0 && fscanf(f,"%s %s %d %d %d %d %s %s %s %s %d %d\n",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,u.nationalite_obs,u.app_politique_obs,&u.num_bv_user,&u.vote_user)!=EOF)
		{
			if(u.cin_user==cin)
				trouve=1;
		}
	}
	fclose(f);
	if (trouve==0)
		u.cin_user=-1;
	return u;
}








