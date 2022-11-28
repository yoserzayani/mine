#include <stdio.h>
#include "utilisateur.h"
#include <string.h>
void ajout_user(char * fileuser,utilisateur u)
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
		
		fprintf(f,"%s %s %d %d %d %s %s %s %d %d %s %s %s  \n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.num_bv_user,u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs);
		

		fclose(f);
		
	}

}


void modifier_user(char * fileuser,char id[],utilisateur nouv)
{	int trouve=0;
	utilisateur u;
	FILE * f=fopen(fileuser,"r");
	FILE * f2=fopen("nouv.txt","a");
	if((f!=NULL) && (f2!=NULL))
	{
		while((trouve==0)&&(fscanf(f,"%s %s %d %d %d %s %s %s %d %d %s %s %s\n ",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,u.cin_user,u.role_user,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs)!=EOF))
		{
			if(strcmp(u.cin_user,id)==0)
			{

				(fprintf(f2," %s %s %d %d %d %s %s %s %d %d %s %s %s \n",nouv.nom_user,nouv.prenom_user,nouv.date.jour,nouv.date.mois,nouv.date.annee,nouv.cin_user,nouv.role_user,nouv.genre_user,nouv.num_bv_user,nouv.vote_user,nouv.nationalite_obs,nouv.app_politique_obs,nouv.profession_obs));
				trouve=1;
			}
			else	
				fprintf(f2,"%s %s %d %d %d %s %s %s %d %d %s %s %s \n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.num_bv_user,u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs);
		}
	}
	fclose(f);
	fclose(f2);
	remove(fileuser);
	rename("nouv.txt",fileuser);
}

void supprimer_user(char * fileuser, char cin[])
{
	int trouve=0;
	utilisateur u;
	FILE * f=fopen(fileuser,"r");
	FILE * f2=fopen("nouv.txt","w");
	if(f!=NULL && f2!=NULL)
	{
		while(fscanf(f,"%s %s %d %d %d %s %s %s %d %d %s %s %s \n ",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,u.cin_user,u.role_user,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs)!=EOF)
		{
			if(strcmp(u.cin_user,cin)==0)
				trouve=1;
			else
				fprintf(f2,"%s %s %d %d %d %s %s %s %d %d %s %s %s \n",u.nom_user,u.prenom_user,u.date.jour,u.date.mois,u.date.annee,u.cin_user,u.role_user,u.genre_user,u.num_bv_user,u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs);
		}
	}
	fclose(f);
	fclose(f2);
	remove(fileuser);
	rename("nouv.txt",fileuser);
}

utilisateur chercher_user(char * fileuser,char cin[])
{
	utilisateur u;
	int trouve;
	FILE * f=fopen(fileuser,"r");
	if(f!=NULL)
	{
		while((trouve==0) && (fscanf(f,"%s %s %d %d %d %s %s %s %d %d %s %s %s ",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,u.cin_user,u.role_user,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs)!=EOF))
		{
			if(strcmp(u.cin_user,cin)==0)
				trouve=1;
		}
	}
	fclose(f);
	return u;
}

void resultat(int choix[] , char texte [])
{
	strcpy(texte,"votre nationnalité:");
	if(choix[0]==1)
	strcat(texte,"Tunisienne");
	if(choix[1]==1)
	strcat(texte,"Etrangère");
}
void genre (int type ,char msg[])
{
if (type==1)
	strcpy(msg,"Homme");
else 
  if(type==2)
	strcpy(msg,"Femme");

}
