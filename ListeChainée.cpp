#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct station{
	int num;
	char nom[50];
	struct station * suivant;
}station, *liste;

liste ajout(int num1, char nom1[],liste l){
	liste ln;
	ln=(station*)malloc(sizeof(station));
	ln->num=num1;
	strcpy(ln->nom,nom1);
	ln->suivant=l;
	return ln;
}
liste ajoutfin(liste l,int num1, char nom1[]){
	liste ln,lp1;
	ln=(station*)malloc(sizeof(station));
	ln->num = num1;
	strcpy(ln->nom,nom1);
	ln->suivant=NULL;
	if(l==NULL)
	return ln;
	else{
		lp1=l;
		while(lp1->suivant!=NULL){
			lp1=lp1->suivant;
		}
		lp1->suivant=ln;
		return l;
	}
	
}
liste supprfin(liste l){
	liste lp1,lp2;
	lp1=l;
	while(lp1->suivant->suivant!=NULL){
		lp1=lp1->suivant;
	}
	lp2=lp1->suivant;
	lp1->suivant=NULL;
	free(lp2);
	return l;
}
