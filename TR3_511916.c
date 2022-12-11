#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){

   	//Variáveis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;

   	//#########################

   	// variavél que vai ser deslocada, variável original

    //recebe input
    k = 0;
    for(i = 0; i < 200; i++)
    {
        x[i] = 0;
    }
   	while (1)
   	{
        printf("Digite o valor: ");
        scanf("%d", &k);

        // delimita os possiveis os possiveis valores de entrada
        if (k < -1 || k > 5000)
            return 1;
        // caso x receba -1 os valores inseridos serão impressos
        else if (k == -1)
            break;
        else
        {

            z = 0;
            y = 1 << (k%32);
            z = z | y;
            x[k/32] = x[k/32] | z;
        }
   	}
   	// Dividir K por 32 para com o resto encontrar em que posição do x[0] ele ficaria

    j = 0;
    // o J será incrementado porém será impresso somente se os bits de Z estiverem ativados nos valores que foram inseridos
   	for (i = 0; i < 200; i++)
   	{

        for(j = 0; j < 32; j++)
        {
            if (x[i] & 1)
            {
                printf("%d ", i*32+j);
            }
            x[i] = x[i] >> 1;

        }



   	}

   	putchar('\n');

   	//#########################

	return 0;
}
