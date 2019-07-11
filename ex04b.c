#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
int a,b,c,d;
char name[20];
srand(time(NULL));
a=rand()%6+1;
b=rand()%6+1;
c=a+b;
  
printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\n\nTotal value: %d\n",a,b,c);
 
 if(c>7){
  printf("%s won!\n", name);
}
else printf("%s lost!\n", name);

 return 0;
}