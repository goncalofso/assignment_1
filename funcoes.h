/** \file funcoes.h 
* \brief MySAGAvg() e MySAGFreq()
* \author Goncalo Moniz 
* \date 22-3-21
* \bug Sem bugs
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief Funcao MySAGAvg, Returns the average of the values of the stream
window (rounded to an int)
* \author Goncalo
* \param[in] array  Array de valores criado na funcao main para teste da funcao
* \param[in] size  Tamanho do array


* \return Media dos valores do array
* \date 22-3-21
*/

int MySAGAvg(int array[],int size)
{
   printf("MySAGAvg running...\n"); 
   int ave = 0;
   int var = 0;
   //printf("SIZE = %d\n",size);
   for (int i = 0; i < size; i++)
   {
       var = var + array[i];
   }
   ave = var/size;
   return ave;
}



/** \brief Funcao MySAGFreq, Returns the number of times that a given value, passed as argument,
exists in the stream window
* \author Goncalo

* \param[in]  array  Array de valores criado na funcao main para teste da funcao
* \param[in]  number Valor 
* \param[in]  size Tamanho do array


* \return Frequencia que o valor introduzido (number) aparece no array
* \date 22-3-21
*/

int MySAGFreq(int array[] , int number,int size)
{
   printf("MySAGFreq running...\n"); 
   int sum = 0;

   for (int i = 0 ; i < size ; i++)
   {
      if(number==array[i]){sum=sum+1;}
   }
   return sum;
}

