#include<stdio.h>
void count(int n[],int ff)
{
    int count=0;
    for(int i=0;i<ff;i++)
    {
        if(n[i]>30)
            {
                count++;
            }
    }
    printf("%d ",count);
    int sum_num=0,sum_den=0;
    for(int j=0;j<ff;j++)
    {
        
        if(n[j]%2==0)
                    {
                        //printf("number is %d",n[j]);
                        //printf("\n");
                        //printf("position is %d",j+1);
                        //printf("\n");
                        sum_num=sum_num+(n[j]*(j+1));
                        sum_den=sum_den+(j+1);
                        //printf("sum num is %d",sum_num);
                       // printf("\n");
                       // printf("sum den is %d",sum_den);
                       // printf("\n");
                        
                    }
            
   }
    float total=(float)sum_num/(float)sum_den; 
    printf("%.2f",total);
    printf("\n");
    
}


int main()
{
    int f=0,arr[50],t,*ptr;
    scanf("%d",&t);
    while(t--)
    {
        while(scanf("%d",&arr[f]))
        {
            if(arr[f]!=-1)
                f++;
            else
                break;
        }
        //printf("\n The number of inputs are: %d ",f);
        //for(int i=0;i<f;i++)
          //  printf("%d ",arr[i]);
        count(arr,f);
        
    }
}
