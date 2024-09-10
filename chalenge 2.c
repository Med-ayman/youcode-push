#include <stdio.h>
#include <stdlib.h>

int main()
{
int x=0;
int t1[100];
printf("Entrez le nombre des element : ");
scanf("%d",&x);

for(int i=0;i<x;i++){

printf("Entrez l'element :");
scanf("%d",&t1[i]);

}

for(int s=0;s<x;s++){

printf("%d\n",t1[s]);



}
return 0;

}
