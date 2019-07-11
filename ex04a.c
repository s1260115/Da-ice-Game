#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
int a,b,c,d;
char name[20];
printf("What is your name?\n");
scanf("%s", name);
printf("Hi, %s!\n", name);

srand(time(NULL));
a=rand()%6+1;
b=rand()%6+1;
d=rand()%6+1;
c=a+b+d;
  
printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nDie 3: %d\nTotal value: %d\n",a,b,d,c);
  return 0;
}