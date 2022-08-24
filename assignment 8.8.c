#include <stdio.h>

int main()
{
    int i,j,count;
    for(i=1;i<=4;i++)
    
    {
        count=1;
        
        for(j=1;j<=4-i;j++)
        printf(" ");
       
       for(j=1;j<=i-1;j++)
            printf("%d",count++);
            while(count!=0)
            printf("%d",count--);
            
           
        
        printf("\n");
    }

    return 0;
}
