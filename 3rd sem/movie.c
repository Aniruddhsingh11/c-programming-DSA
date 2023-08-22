 #include <stdio.h>
int main()
{
    int n,m,i,j,d=0,k,c=0;
    printf("enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number to seats\n");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<m;j++)
        {
            if(a[i+j]==0)
            c++;
            else c=0;
        
        if(c==m)
        {
            k=i;
            break;
        }
        }
    }
    
            for(j=0;j<m;j++)
        {
            a[k+j]=1;
        }
        
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}