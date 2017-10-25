#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int main()
{
   int i;
   int angka;
   int jawab=1;
   scanf("%d",&angka);
   for(i=1;i<=angka;i++)
   {
      jawab=i*jawab;
   }
   printf("Hasil %d!= %d\n",angka,jawab);
}
