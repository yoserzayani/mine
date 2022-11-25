#include <stdio.h>
#include <string.h>
#include "utilisateur.h"
#include "tache.h"

float TVB(char * fileuser)
{	utilisateur u;
	float nb_votes_blancs;
	float nb_votes;
	FILE *f=fopen(fileuser,"r");
	if (f!=NULL)
	{	while (fscanf(f,"%s %s %d %d %d %d %s %s %d %d %s %s %s\n",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs)!=EOF)
		{	nb_votes++;
			if(u.vote_user==0)
			{	
				nb_votes_blancs++;
				
			}
				
		
		}
		

	}
	fclose(f);
	return (nb_votes_blancs/nb_votes)*100;

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
