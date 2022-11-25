#include <stdio.h>
#include "utilisateur.h"
#include <string.h>
#include "tache.h"
int main()
{	float T;
	int f,h;
	

	utilisateur u;
	utilisateur u1= {"nom1","prenom1",12,12,2000,14415777,"observateur","homme",3,1,"tunisienne","gauche","professeur"};
	utilisateur u2= {"nom2","prenom2",10,11,2001,14415771,"admin","homme",1,1};
	utilisateur u3= {"nom3","prenom3",12,11,1999,14423548,"observateur","femme",1,1,"tunisienne","droit","etudiant"};
	int x=ajout_user("utilisateur.txt", u1);
	x=ajout_user("utilisateur.txt",u2);
	x=ajout_user("utilisateur.txt",u3);
	x=modifier_user("utilisateur.txt",14423547,u2);
	utilisateur u4 =chercher_user("utilisateur.txt",14415777);
	if (u4.cin_user==u1.cin_user)
	{
		printf("utilisateur existe déja");}
	else {
	printf("utilisateur n'existe pas");}
	x= supprimer_user("utilisateur.txt",14423548);
 	
	
	/*T=TVB("utilisateur.txt");
	printf("%f",T);
	TPHF ("utilisateur.txt",&f,&h);*/
	return 0;
}

