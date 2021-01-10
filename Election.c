#include<math.h>

int v=7, c1=0, c2=0, c3=0, c4=0, vn=0, vb=0;

int main(){
    printf("Seja bem vindo! Inicie as votações!");

    while(v!=0)
    {
        printf("\n\n 1-Fulano\n 2-Sicrano\n 3-Beltrano\n 4-Alguem\n 5-Voto Nulo\n 6-Voto em Branco");
        printf("\nDigite o número correspondente ao seu voto e digite ENTER: ");
        scanf("%i",&v);

        switch(v)
        {
            case 0: 
                printf("\nVotação Encerrada!");
                break;
            
            case 1:
                c1=c1+1;
                printf("Fulano - Voto Registrado!");
                break;

            case 2:
                c2=c2+1;
                printf("Sicrano - Voto Registrado!");
                break;
            
            case 3:
                c3=c3+1;
                printf("Beltrano - Voto Registrado!");
                break;
            
            case 4:
                c4=c4+1;
                printf("Alguem - Voto Registrado!");
                break;

            case 5:
                vn = vn+1;
                printf("Voto Nulo - Voto Registrado!");
                break;

            case 6:
                vb=vb+1;
                printf("Voto em Branco - Voto Registrado!");
                break; 

            default: 
                printf("Opção invalida");
                break;
        }
    }
    printf("Resultados:\n Fulano\t\t %i\n Sicrano\t %i\n Beltrano\t %i\n Alguem\t %i\n Votos Nulos\t %i\n Votos em Branco %i\n",c1,c2,c3,c4,vn,vb);

getchar();
printf("\n\n");
system("pause");
return(0);


}