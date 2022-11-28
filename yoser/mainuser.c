#include <stdio.h>
#include "utilisateur.h"
#include <string.h>
int main()
{	float T;
	int f,h;
	

	utilisateur u;
	utilisateur u1= {"nom1","prenom1",12,12,2000,"14415777","observateur","homme",3,1,"tunisienne","gauche","professeur"};
	utilisateur u2= {"nom2","prenom2",10,11,2001,"14415771","admin","homme",1,1};
	utilisateur u3= {"nom3","prenom3",12,11,1999,"14423548","observateur","femme",1,1,"tunisienne","droit","etudiant"};
	ajout_user("utilisateur.txt", u1);
	ajout_user("utilisateur.txt",u2);
	ajout_user("utilisateur.txt",u3);
	modifier_user("utilisateur.txt","14423548",u2);
	utilisateur u4 =chercher_user("utilisateur.txt","14415771");
	if (strcmp(u4.cin_user,u.cin_user)==0)
	{
		printf("utilisateur existe déja");}
	else {
	printf("utilisateur n'existe pas");}
	 supprimer_user("utilisateur.txt","14415777");
 	
	return 0;
}

