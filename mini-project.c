#include <stdio.h>
#include <string.h>

int main()
{
    int option =0,id[99],quantite[99],count = 0;
    int exist=0;
    float prix[99];
    char search[10];
    char livre[99][10], auteur[99][10];
     while (option!=7)
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
            fgets(livre[count],sizeof(livre[count]),stdin);
            printf("Nom d'auteur:\n");
            fgets(auteur[count],sizeof(auteur[count]),stdin);
            printf("Quantite:\n");
            scanf("%d",&quantite[count]);
            printf("Prix:\n");
            scanf("%f",&prix[count]);
          break;
          case 2:
            for(int i=1; i<=count;i++){
              printf("%d  | ",id[i]);
              printf("%s  |",livre[i]);
              printf("%s  |",auteur[i]);
              printf("%d  |",quantite[i]);
              printf("%f Dhs  |\n",prix[i]);

            } 
          break;
          case 3:
            exist = 0;
            printf("Titre de Livre\n");
            fgets(search,sizeof(search),stdin);
             for (int i =1; i <=count;i++){
                  if(strcmp(livre[i],search) ==0){
                      printf("Trouvee: %s\n",livre[i]);
                     exist =1;
                     }
            }
              if (exist ==0) {
                 printf("n'existe pas\n");
              }
            
          break;
         case 4: //changer quantite d'un livre
         exist = 0;
            int nq;
            printf("Titre de Livre\n");
            fgets(search,sizeof(search),stdin);
           for (int i =1; i <=count;i++){
               if(strcmp(livre[i],search) ==0){
                  printf("entrer nouveau quantite:\n");
                    scanf("%d",&nq);
                    quantite[i] = nq;
                     exist =1;
                     }
            }
        if (exist ==0) {
          printf("n'existe pas\n");
        } 
        break;
      case 5: //suprimer
            printf("Titre de Livre pour supprimer:\n");
            fgets(search,sizeof(search),stdin);
                 for (int i =1; i <=count;i++){
                    if(strcmp(livre[i],search) ==0){
                      strcpy(livre[i],livre[i+1]);
                      strcpy(auteur[i],livre[i+1]);
                      id[i] = id[i+1];
                      prix[i] = prix[i+1];
                      quantite[i] = quantite[i+1];
                     count--; 
                     exist =1;
                     }
            }
        if (exist ==0) {
          printf("n'existe pas\n");
        }
      break;
      case 6: // Afficher nombre total de livre
        //total
        printf("Total de livres: %d\n",count);
        break;
        case 7: //Quitter
        option =7;
        break;
        default:
        printf("!!Choisi un nombre entre 1-7!!!\n\n\n\n");
            break;
        }
    }
    

    return 0;
}
