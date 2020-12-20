//calculadora simples 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float adicao(float a, float b){
    return(a+b);
}
float subtracao(float a, float b){
    return(a-b);
}
float multiplicacao(float a, float b){
    return(a*b);
}
float divisao(float a, float b){
    return(a/b);
}
float potencia(float a, float b){
    return(pow(a,b));
}
float raiz(float a){
    return(sqrt(a));
}
unsigned long fatorial(unsigned long n){
    if(n==1 || n==0)
    return 1;
    else 
    return(n*(fatorial(n-1)));
}
int main(){
    char op;
    float z,w;
    int k;
    long a;
    do{
        system("cls");
        system("color F2");
        printf("Este programa executa as mesmas funções de uma calculadora simples\n\n");
        printf("Escolha a sua opção:\n");
        printf("1-Soma\n2-Diferenca\n3-Produto\n4-Divisao\n5-Potencia\n6-Raiz\n7-Fatorial\n");
        do{ scanf("%i", &k);
        }while(k<1||k>7);
        if((k==1)||(k<=5))
        {
            printf("Entre com o primeiro valor: ");
            scanf("%f", &z);
            printf("Entre com o segundo valor: ");
            scanf("%f",&w);
        }
        else
        {
            if((k==6))
            {
                printf("Entre com o valor: ");
                scanf("%f", &z);
            }
        }
        switch(k){
            case 1:
                printf("Soma de %f e %f = %.2f\n",z,w,adicao(z,w));
                break;
            case 2:
                printf("Diferenca de %f e %f = %.2f\n",z,w,subtracao(z,w));
                break;
            case 3:
                printf("Produto de %f e %f = %.2f\n",z,w,multiplicacao(z,w));
                break;
            case 4:
                while((w==0)){
                    printf("ERRO!! IMPOSSÍVEL DIVIDIR POR ZERO\n");
                    scanf("%f",&w);}
                    printf("Divisao de %f e %f = %.2f\n",z,w,divisao(z,w));
                    break;
            case 5:
                printf("%f elevado a %f = %.2f\n",z,w,potencia(z,w));
                break;
            case 6: 
                while((z<0)){
                    printf("ERRO! NÃO EXISTE RAIZ QUADRADA DE NÚMERO NEGATIVO\n");
                    scanf("%f",&z);}
                    printf("Raiz quadrada de %f = %.2f\n",z,raiz(z));
                    break;
            case 7:
                    printf("Entre com o valor para efetuar o calculo do fatorial:\n");
                    scanf("%li",&a);
                    while(a<0)
                {
                printf("!!!ERRO!!! NAO EXITE FATORIAL NEGATIVO!\n");
                scanf("%li",&a);
                }
                printf("Fatorial de %li = %li\n",a,fatorial(a));
                break;    
        }
        printf("Deseja efetuar outro calculo. (S)/(N):");
        scanf("%s", &op);
        }while((op=='s')||(op=='S'));
    system("Pause");
}//fim do programa
                



