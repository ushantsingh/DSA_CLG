// to find the max number of characters occuring in a string 

// Ex :-   abcabcbbbbcccc.   O/P:- b

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char result;
    char s[]="abcabcccbbbb";
    int ln=strlen(s);
    char freq[256]={0};
    for(i=0;i<ln;i++)
    {
        freq[s[i]]++;
    }
    int max=0;
    for(i=0,j=0;i<ln;i++)
    {
        if(freq[s[i]]>max)
        {
            max=freq[s[i]];
            result=s[i];
        }
    }
    printf("Max number of charracter occuring in string is %c --> %d times",result,max);

}