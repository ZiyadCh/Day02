#include <stdio.h>

int main()
{
    int option,id[99],quantite[99],count = 0;
    char livre[30][99], auteur[10][99];
     while (option<=6)
    {
    printf("+========================================+\n");
    printf("|               LIBRAIRIES               |\n");
    printf("+========================================+\n");
    printf("|1- Ajouter un livre.                    |\n");
    printf("|2- Afficher touts les livre disponible. |\n");
    printf("|3- Rechercher un livre.                 |\n");
    printf("|4- Mettre a jour la quantite d'un livre.|\n");
    printf("|5- Supprimer un livre.                  |\n");
    printf("|6- Afficher nombre total de livres.     |\n");
    printf("|7- Quitter.                             |\n");
    printf("+=========================================+\n");
    scanf("%d",&option);
   
        switch (option)
        {
       case 1:
        count++;
        id[count] = count;
            printf("Nom de livres:\n");
            scanf("%s",livre[count]);
            printf("Nom d'auteur:\n");
            scanf("%s",auteur[count]);
            printf("Quantite:\n");
            scanf("%d",&quantite[count]);
        break;
        case 2:
            printf("%d  | ",id[count]);
            printf("%s          |",livre[count]);
            printf("%s      |",auteur[count]);
            printf("%d      |\n",quantite[count]);
        
        break;
        case 7:
        option =7;
        break;
        default:
        printf("!!Choisi un nombre entre 1-7!!!\n\n\n\n");
            break;
        }
    }
    

    return 0;
}
