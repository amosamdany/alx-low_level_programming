#include<stdio.h>

int main(void){

char c;
int a;
long int la;
long long int lla;
float f;

printf("Size of a char: %ld bytes(s)\n", sizeof(c));
printf("Size of an int: %ld bytes(s)\n", sizeof(a));
printf("Size of a long int: %ld bytes(s)\n",sizeof(la));
printf("Size of a long long int: %ld bytes(s)\n",sizeof(lla));
printf("Size of a float: %ld bytes(s)\n",sizeof(f));

return (0);

}

