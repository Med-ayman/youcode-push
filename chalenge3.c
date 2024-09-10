#include <stdio.h>
#include <stdlib.h>

int main()
{

int x=0 , s=0;

int t1[100];

printf("Entrez le nombre des elements : ");

scanf("%d",&x);

for(int i=0;i<x;i++){

printf("Entrez l'element :");

scanf("%d",&t1[i]);
 s+= t1[i];

}

printf("%d",s);


return 0;

}
