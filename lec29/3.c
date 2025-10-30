// Factorial using recursion

#include<stdio.h>
int factorial (int a){
    if (a==1 || a==0)
    {
        return 1;
    }
    return a*factorial(a-1);
}

int main(){
    int data = factorial(5);
    printf("%d", data);
}