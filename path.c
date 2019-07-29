#include <stdio.h>
void main()
{
    int n,count=0;
    
    char map[30][30];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&map[i][j]);
            
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   if(i==j||i<j)
            {
            if(map[i][j]=='S'||map[i][j]=='P')
            {
                count++;}
                else if(map[i][j]=='E')
                {
                    break;
                }
            }
            else if(map[i][j]=='E')
            {
                break;
            }
        }
    }
    ;
    printf("%d",count);
}
