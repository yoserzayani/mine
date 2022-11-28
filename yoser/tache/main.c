#include <stdio.h>
#include <string.h>
#include "utilisateur.h"
#include "tache.h"
int main(){
  float T;
  int f,h;
  T=TVB("utilisateur.txt");
  printf("%f",T);
  TPHF ("utilisateur.txt",&f,&h);
return 0;
}
