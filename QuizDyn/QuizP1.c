#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{ 
    int a;
    int refaire = 0, score = 8;
    
    int b;
    int refaire2 = 0;
  
  
      do
    {
        printf("\n\n\t-------------------------------------------------");
        printf("\n\n\t\t\tStart(appuyez sur 1) : ");
        scanf("%d", &b);
        printf("\n\t-------------------------------------------\n");
        printf("\n\tQuestion N1\n\tQuand Minecraft a ete cree ?\n");
        printf("\n\t-------------------------------------------\n");

        do
        {
            printf("\n\treponse 1: 2009\n");
            printf("\n\treponse 2: 2011\n");
            printf("\n\treponse 3: 2007\n");
            printf("\n\treponse 4: 2006\n");
            printf("\n\tIncrivez la reponse ici : ");
            scanf("%d", &a);

            switch(a)
            {
                case 1:
                printf("\n\t-------------------------------------------\n");
                printf("\n\tMauvaise reponse !\n");
                score -= 1;
                printf("\n\t-------------------------------------------\n");
                break;
                
                case 2:
                printf("\t\n-------------------------------------------\n");
                printf("\t\nBonne reponse !\n");
                printf("\t\n-------------------------------------------\n");
                break;
                
                case 3:
           }


            
