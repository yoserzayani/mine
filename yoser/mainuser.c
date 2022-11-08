#include <stdio.h>
#include "utilisateur.h"
#include <string.h>
int main()
{
    utilisateur u1= {"nom1","prenom1",12,12,2000,14415777,"observateur","homme","tunisienne","gauche",22,1},
    u2= {"nom2","prenom2",10,11,2001,14415771,"admin","homme","tunisienne","gauche",1,1};
    int x=ajout_user("utilisateur.txt", u1);
   
    x=modifier_user("utilisateur.txt",14415771,u2);
    utilisateur u3=chercher_user("utilisateur.txt",14412633);
    if(u3.cin_user!=-1)
    {
	printf("utilisateur existe déja");}
    else {
	printf("utilisateur n'existe pas");}
    
    x= supprimer_user("utilisateut.txt",14412633);
    return 0;
}
