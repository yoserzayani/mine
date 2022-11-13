#include <stdio.h>
#include "utilisateur.h"
#include <string.h>
int main()
{
	utilisateur u1= {"nom1","prenom1",12,12,2000,14415777,"observateur","homme","tunisienne","gauche",22,1};
	utilisateur u2= {"nom2","prenom2",10,11,2001,14415771,"admin","homme","tunisienne","gauche",1,1};
	utilisateur u3= {"nom3","prenom3",12,11,1999,14423547,"observateur","femme","tunisienne","droit",1,1};
	int x=ajout_user("utilisateur.txt", u1);
	x=ajout_user("utilisateur.txt",u2);
	x=ajout_user("utilisateur.txt",u3);
   	x=modifier_user("utilisateur.txt",14415771,u2);
	utilisateur u=chercher_user("utilisateur.txt",14423547);
	if(u3.cin_user!=-1)
	{
		printf("utilisateur existe déja");
		x= supprimer_user("utilisateur.txt",14423547);}
	else {
	printf("utilisateur n'existe pas");}
 	return 0;
}
