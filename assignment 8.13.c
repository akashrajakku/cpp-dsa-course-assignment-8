#include<stdio.h>
int main()
{
    int i,j;
    char count;
    
    for (i=1;i<=7;i++)
    {
        count='A';
        for(j=1;j<=13;j++)
        
        {
            if(j>=9-i && j<=5+i)
            {
            printf(" ");
            }
            else
            printf("%c",count);
            j<7?count++:count--;
            
        }
        printf("\n");
    }
    return 0;
}