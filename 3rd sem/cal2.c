#include <stdio.h>


int main()
{
    int i,days,start;
    do{
        printf("Enter the number of days\n");
        scanf("%d",&days);
    }while(days<28 | days>31);
    do{
                printf("\nEnter the start day number 1-Sun; 2-Mon; ... ; 7-SAT");
                scanf("%d",&start);
                    
    }while(start<0 | start>7);
    printf("\nSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n\n");
    for(i=1;i<=days+start-1;i++)
    {
                              if(i<start)
                              {
                                       printf(" \t");
                              }
                              else
                              {
                                        printf("%d\t",i-start+1);
                              }
                              if((i%7)==0)                        
                              printf("\n");
    }
    
    
    
    return 0;
}



