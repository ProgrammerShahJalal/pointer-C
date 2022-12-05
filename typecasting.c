#include<stdio.h>
int main(){
    int a=7;
    double b =9.43;
    char c = 'a';

    b=(double) a/4;
    printf("%d %lf %c", a, b, c);
}