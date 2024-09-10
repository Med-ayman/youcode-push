#include <stdio.h>
#include <stdlib.h>

int main()
{

int x=0 , max=0;
int t1[100];
printf("Entrez le nombre des elements : ");
scanf("%d",&x);

for(int i=0;i<x;i++){

printf("Entrez l'element :");
scanf("%d",&t1[i]);

if(max<t1[i]){

max=t1[i];

}else{

continue;
}

}


printf("%d",max);


return 0;

}
