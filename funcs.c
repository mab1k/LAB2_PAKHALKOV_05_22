#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void tentobin(int b)
 {
    if (b<0){
        b = -b;
		printf("-");
    }
    long int c = 0;
    int k = 1;
    while(b){
            c += k*(b%2);
            k *= 10;
            b /= 2;
     }
    printf("%lu\n",c);
 
}
void tentooct(int b)
 {
     if (b<0){
        b = -b;
		printf("-");
    }
 	long int c = 0;
    int k = 1;
    while(b){
            c += k*(b%8);
            k *= 10;
            b /= 8;
     }
    printf("%lu\n",c);
}
long int atoi2(char* str) {
	long int a = strtol(str,NULL,2);
    return a;
}
long int atoi8(char* str){
	long int a = strtol(str,NULL,8);
    return a;
}
long int atoi16(char* str){
	long int a = strtol(str,NULL,16);
    return a;
}