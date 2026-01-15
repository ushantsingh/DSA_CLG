// FIbonacci series 

#include<stdalign.h>
int fibonacci(int a)
{
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else {
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}

int main(){
    int data = fibonacci(8);
    printf("%d", data);
}