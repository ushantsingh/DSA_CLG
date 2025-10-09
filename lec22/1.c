// to find the max number of characters occuring in a string 

// Ex :-   abcabcbbbbcccc.   O/P:- b

#include<stdio.h>
#include<string.h>
int main()
{
    
    char result;
    char str[]="abcabcccbbbb";
    int ln=strlen(str);
    char freq[256]={0};
    for(int i=0;i<ln;i++)
    {
        freq[str[i]]++;
    }
    int max=0;
    for(int i=0,j=0;i<ln;i++)
    {
        if(freq[str[i]]>max)
        {
            max=freq[str[i]];
            result=str[i];
        }
    }
    printf("Max number of charracter occuring in string is %c --> %d times",result,max);

}