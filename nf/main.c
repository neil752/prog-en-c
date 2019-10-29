#include <stdio.h>
#include <stdlib.h>
#include <math.h>



char tableau[2][2];
int i;
int j;

void inittab() //void est  utilisé là où se place le type de retour d'une fonction / la c'est pour la creation du tableau
    {
                for(i=0;i<2;i++) //pour I égale à 0 ou   plus grand que 2
    {
                for(j=0;j<2;j++) //pour J égale à 0 ou   plus grand que 2
                {
                        tableau[i][j] = ' ' ; //on met un vide par "rien" donc le cara éspace
                }

    }

    }

void modiftab() //modification du tableau
{

            int colonne;
            int ligne;
            int k=0;

               printf("joueur 1 à toi :\n\n"); //equivalent de écrire
               printf("choisi ta ligne :\n\n");
               scanf("%d", &ligne);//equivalent de  lire
               printf("choisi ta colonne: \n\n");
               scanf("%d",&colonne);
               system("cls"); //pour linux c'est systeme 'clear' et sert a effacer le tableau
               // pour empecher un empilement de tableau et pouvoir mettre les modification
               tableau [ligne -1][colonne -1] ='X'; //modif du tableau
               affichertab(); //afficher la forme final du tableau aprés modif


               printf("joueur 2 à toi :\n\n");
               printf("choisi ta ligne : \n\n");
               scanf("%d", &ligne);
               printf("choisi ta colonne:\n\n");
               scanf("%d",&colonne);
               system("cls");
               tableau [ligne -1][colonne -1] ='O';
               affichertab();

}








              void affichertab()  { // appelle de la fonction afficher le tableau

           printf("\n\n\n");
           printf("+-----+\n");
           printf("|%c|%c|%c|\n", tableau[0][0], tableau[0][1], tableau[0][2]);
           printf("+-----+\n");
           printf("|%c|%c|%c|\n", tableau[1][0], tableau[1][1], tableau[1][2]);
           printf("+-----+\n");
           printf("|%c|%c|%c|\n", tableau[2][0], tableau[2][1], tableau[2][2]);
           printf("+-----+\n");
           printf("\n\n\n"); }






int main()
{

int choixMenu;


printf("morpion game \n\n"); //titre du jeu
printf("mode de jeu \n\n"); //sous-titre du jeu
printf("1 : 2 player\n"); //choix entre les regles du jeu ou le mode deux joueur
printf("2 : Regles du Morpion\n");
scanf("%d", &choixMenu);


switch (choixMenu) //on fais un switch case entre les deux choix ou le defaut si le joueur reponds n'importe quoi
{
case 1: //le joueur jouera contre le deuxieme joueur

system("cls");

inittab(); //on initialise la table (tableau)

   for (i=0; i<9; i++)
                {
                        system("cls");
                        affichertab();
                        modiftab();
                        affichertab();
       }
  break;




case 2: //on explique les régles pour les personnes qui n'y ont jamais joué
        printf(" vous devez reussir a aligner 3 croix ou ronds \n");
        printf("le premier qui y arrive gagne \n");
        printf("on peux aligner horizontalement ou verticalement  \n");
        printf("les ronds commences \n");
  break;


default: // si le joueur réponds n'imp on lui met un message de prevention
  printf("you shouldn't do that °\_(._.)_/°");
  break;
}




    return 0;
}
/*#define NFOIS 5
#define PI 3.14
#define Nom "fedda"
#define CAR 'x'
#define TAILLE 10
#define mot "hell"
//exemple de programme en C

int main()

int a=0,b=0, c=0;
    if(a==b){
        printf(" ils sont égaux\n");
         }else{
            printf("ils sont different\n");

    }

    if(a==b) &&/* on peux ecrire )||(*/ /* ( a==c){
        printf("ils sont tous égaux\n"); }
        else{
            printf(" ils sont tous differents\n");
        }




    if(a==b) &&  (a==c){
        printf("ils sont tous égaux\n"); }
        else if ((a==b) &&  (a!=c)){
            printf(" ils sont tous differents\n");
        }


    int i=0;
    /* si on met t on dois mettre t=la valeur que l'on veux lui mettre , par exemple dans ce cas là c'est 0*/ /*
    for(i=0;i<10 /*on peux mettre TAILLE ou t *//*;i++){

        printf("hello world\n");}
    //tant que
     i=0
     do{
        printf("canva\n");
        i++;

     }
   while (i<TAILLE){
    printf("canva\n");
    i++;


   }

   //cas altern.
   int choix=1

   printf("entrer votre choix\n");
   scanf("%d",&choix)
   switch (choix) {

   case 0:printf("quitter\n");break;
   case 1:printf("calculer\n");break;
   case 2:printf("jouer\n");break;
   default : printf("default\n");break;
   }


   a==b? printf("Egaux"): printf("Different");

   //instruction en breack
   for( i=0;i<TAILLE; i++){
       printf("hello\n");

       if (i==3){
        break;

       }
   }
    for( i=0;i<TAILLE; i++){
       printf("hello\n");

       if (i<3){

       printf( "contine\n");
        continue;
       }
   }
    return 0;
   int main()
   {

   printf("%d\n",TAILLE);
   printf("%d\n",mot);

   int val;
   scanf("%d",&val);
   fflush(stdin);
   char CAR;
   scanf("%c"& CAR);
   char tabCar[TABLE];
   scanf("%s",&tabCar);

   }
 return 0;
 ------------------
 char CAR;
 printf("entrer un car\n");
 CAR=getchar();
 while((CAR>='a' && CAR<='z')||(CAR>='A' && CAR<='Z')) {
    printf("%c\n",CAR);
    fflush(stdin);
    CAR=getchar();

 } */
/*int main()
short int nA;
int nB;
long int nC;

const int cnT=10;

volatile int nVolB;

static int nStatB;

printf("Taille de a :%d\n",sizeof(nA));
printf("Taille de b :%d\n",sizeof(nB));
printf("Taille de c :%d\n",sizeof(nC));

float fltReelSimple;

double dblReelDouble;

printf("taille de a : %d\n",sizeof(fltReelSimple));
printf("taille de a : %d\n",sizeof(dblReelDouble));

char cCaractere;
printf("taille de cCaractere : %d\n ",sizeof(cCaractere));

printf("NFOIS ; %d\n",NFOIS);
printf("PI : %f\n",PI);
printf("NOM : %s\n",NOM);
printf("CAR : %c\n",CAR);

int nI=0;
++nI;
nI++;
//%=modulo , /division =division

long double ldblLongDouble=100.696969696969
printf("Val de ldbLongDouble :%lf",ldblLongDouble);
return 0;*/

/*int main()
{
    int i;
    float x;
    float racx;

    printf("bonjour\n");


    racx=sqrt(x);
    printf("bonjour");
    printf("je vais vous calculer la racine carré de %lf",sqrt(x));

    for i(i=0; i<NFOIS; i++)
    {
        printf("donnez un nombre : ");
        scan("%f",&x);
        if(x<0.0)
            printf("le nombre %f ne possede pas de racine carree\n",x);
        else
        {
            racx=sqrt(x);
            printf("le nombre %f a pour racine carree : %f\n",x,racx);

        }
    }

    printf("travail fin-bye");

    return 0;
}
*/
/* void main (){

{
    int i;
    float x;
    float racx;

    printf("bonjour\n");


    racx=sqrt(x);
    printf("bonjour");
    printf("je vais vous calculer la racine carré de %lf",sqrt(x));

    for i(i=0; i<NFOIS; i++)
    {
        printf("donnez un nombre : ");
        scan("%f",&x);
        if(x<0.0)
            printf("le nombre %f ne possede pas de racine carree\n",x);
        else
        {
            racx=sqrt(x);
            printf("le nombre %f a pour racine carree : %f\n",x,racx);

        }
    }

    printf("travail fin-bye");

    return 0;
}



} */
/*compilation= sert a trasuire le code sur un pc il marche grace a un compilateur.
en language C contenue de l'existence d'un preprocesseur la compilation se comprte en deux etats
l'objet cree par l'utilisateur n'est pas directement copiable il lui manque au moins les differents module , utiliser dans le programe
c'est le role de l'editeur de lien d'aller chercher que d'aller chercher dans la bibliotheque les modules necessaire.

