#include<stdio.h>
//  SWAPPING TWO ARRAY WITHOUT USING THIRD VARIABLE  USING POINTER

#include<stdio.h>
int swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    // return ;
}

int main()
{
    int x=50;
    int y=60;
    printf("x=%d\ny=%d",x,y);
    swap(&x,&y);
    printf("\nx=%d\ny=%d",x,y);
}