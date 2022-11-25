#include <stdio.h>
#include "utilisateur.h"
#include <string.h>
#include "tache.h"

int ajout_user(char * fileuser,utilisateur u)
{	
	FILE * f=fopen(fileuser,"a");
	if (f!=NULL)
	{		
		if (strcasecmp(u.role_user,"observateur")!=0)

		{
			strcpy(u.nationalite_obs,"**");
			strcpy(u.app_politique_obs,"**");
			strcpy(u.profession_obs,"**");
	 	}
		
		fprintf(f,"%s %s %d %d %d %d %s %s %d %d %s %s %s  \n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.num_bv_user,u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs);
		

		fclose(f);
		return 1;
	}
	else return 0;
}


int modifier_user(char * fileuser,int id,utilisateur nouv)
{	int trouve=0;
	utilisateur u;
	FILE * f=fopen(fileuser,"r");
	FILE * f2=fopen("nouv.txt","a");
	if((f!=NULL) && (f2!=NULL))
	{
		while((trouve==0)&&(fscanf(f,"%s %s %d %d %d %d %s %s %d %d %s %s %s\n ",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs)!=EOF))
		{
			if(u.cin_user==id)
			{

				(fprintf(f2," %s %s %d %d %d %d %s %s %d %d %s %s %s \n",nouv.nom_user,nouv.prenom_user,nouv.date.jour,nouv.date.mois,nouv.date.annee,nouv.cin_user,nouv.role_user,nouv.genre_user,nouv.num_bv_user,nouv.vote_user,nouv.nationalite_obs,nouv.app_politique_obs,nouv.profession_obs));
				trouve=1;
			}
			else	
				fprintf(f2,"%s %s %d %d %d %d %s %s %d %d %s %s %s \n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.num_bv_user,u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs);
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
		while(fscanf(f,"%s %s %d %d %d %d %s %s %d %d %s %s %s \n ",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs)!=EOF)
		{
			if(u.cin_user==cin)
				trouve=1;
			else
				fprintf(f2,"%s %s %d %d %d %d %s %s %d %d %s %s %s \n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.num_bv_user,u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs);
		}
	}
	fclose(f);
	fclose(f2);
	remove(fileuser);
	rename("nouv.txt",fileuser);
	return trouve;
}

utilisateur chercher_user(char * fileuser,int cin)
{
	utilisateur u;
	int trouve;
	FILE * f=fopen(fileuser,"r");
	if(f!=NULL)
	{
		while(trouve==0 && fscanf(f,"%s %s %d %d %d %d %s %s %d %d %s %s %s ",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs)!=EOF)
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



float TVB(char * fileuser)
{	utilisateur u;
	float nb_votes_blancs;
	float nb_votes;
	float taux_votes_blancs;
	FILE *f=fopen(fileuser,"r");
	if (f!=NULL)
	{	while (fscanf(f,"%s %s %d %d %d %d %s %s %d %d %s %s %s\n ",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs)!=EOF)
		{	nb_votes++;
			if(u.vote_user==0)
			{	
				nb_votes_blancs++;
				
			}
				
		
		}
		

	}
	fclose(f);
	taux_votes_blancs=(nb_votes_blancs/nb_votes)*100;
	return taux_votes_blancs;

}
void TPHF (char *fileuser,int *f,int *h)
{	utilisateur u;
	int H;
	int F;
	FILE *f1=fopen(fileuser,"r");
	if(f!=NULL)
	{	while((fscanf(f1,"%s %s %d %d %d %d %s %s %d %d %s %s %s\n ",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs)!=EOF))
		{	if (u.vote_user==1)
			{	if (strcasecmp(u.genre_user,"homme")==0)	
				{	
					H++;
				}
				else
				{
					F++;
				}
			}

		}
		
	}
	fclose(f1);
	*f=((*f+F)/(F+H))*100;
	*h=((*h+H)/(F+H))*100;

}


