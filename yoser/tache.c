#include <stdio.h>
#include <string.h>
#include "utilisateur.h"
#include "tache.h"

float TVB(char * fileuser)
{	utilisateur u;
	int nb_votes_blancs;
	FILE *f=fopen(fileuser,"r");
	FILE *f2=fopen("filetache.txt","w");
	if (f!=NULL && f2!=NULL)
	{	while(fscanf(f,"%s %s %d %d %d %d %s %s %s %s %d %d\n",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,u.nationalite_obs,u.app_politique_obs,&u.num_bv_user,&u.vote_user)!=EOF)
		{
			if(u.vote_user==0)
			{	
				nb_votes_blancs++;
				fprintf(f2,"%d\n",u.vote_user);
			}
				
		
		}
		

	}
	fclose(f);
	fclose(f2);
	return nb_votes_blancs;

}
void TPHF (char *fileuser,int *f,int *h)
{	utilisateur u;
	FILE *f1=fopen(fileuser,"r");
	if(f!=NULL)
	{	while(fscanf(f1,"%s %s %d %d %d %d %s %s %s %s %d %d\n",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,&u.cin_user,u.role_user,u.genre_user,u.nationalite_obs,u.app_politique_obs,&u.num_bv_user,&u.vote_user)!=EOF)
		{	if (u.vote_user==1)
			{	if (u.genre_user=="homme"||u.genre_user=="Homme")	
				{	
					*h++;
				}
				else
				{
					*f++;
				}
			}

		}
	}



}