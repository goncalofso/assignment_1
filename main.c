/** \file main.c
* \brief Testa as funcoes
* \author Goncalo Moniz
* \date 22-3-21
* \bug Sem bugs
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int MySAGFreq(int array[] , int number,int size);
int MySAGAvg(int array[],int size);

/** \brief Funcao main testa as funcoes MySAGFreq, MySAGAvg
* \author Goncalo
* \param[in,out] Describe Sem argumentos
* \return Retorna 0
* \date 22-3-21
*/
int main()
{
    int number = 0;
    int array[] = {1,1,1,1,2,2,2,3,3,4};

    int size = sizeof(array) / sizeof(array[0]);
    //printf("SIZE = %d\n",size);

    int ave =  MySAGAvg(array,size);
    printf("Average of the values = %d\n\n",ave);

    printf("Introduce a number => ");
    scanf("%d", &number);
    //printf("number = %d\n",number);
    int sum = MySAGFreq(array,number,size);
    
    printf("Number of times that a given value exists in the stream window = %d\n",sum);
    return 0;
}