//  SWAPPING TWO ARRAY USING POINTER

#include<stdio.h>
int swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
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