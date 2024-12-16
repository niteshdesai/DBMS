#include<stdio.h>
#define m 10
void bfs(int arr[][m],int v)
{
    int visited[v],queue[100],f=0,r=0,i,j,x;
    queue[0]=0;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            if(arr[f][j]==1)
            {
              r++;
              queue[r]=j;
            }
        }
        f++;
    }
    for(i=0;i<r;i++)
    {
       
    }
}
void add_adges(int arr[][m],int e)
{
    int i,j,v1,e1;
    for(i=0;i<e;i++)
    {
        printf("enter verice and adger to connected:");
        scanf("%d %d",&v1,&e1);
        arr[v1][e1]=1;
        arr[e1][v1]=1;
    }
}
void graph(int v,int e)
{
    int arr[m][m];
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            arr[i][j]=0;
        }
    }
    add_adges(arr,e);
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    bfs(arr,v);
}
void main()
{
  int v,e;
  printf("Enter vartice and edges:");
  scanf("%d %d",&v,&e);
  graph(v,e);
}