
#include<math.h>
int main()
{
    int i,j,t,n,b,sum=0;
    float a,sum1,d,c;
    scanf("%d",&t);
   for(j=1;j<=t;j++){
        scanf("%d",&n);
         for(i=0;i<n;i++){
                 scanf("%f %d",&a,&b);
               c=a*b;
               sum1=sum1+c;
         }
           scanf("%f",&d);
           sum=d-sum1;
           sum1=0;
           printf("Case %d: %d\n",j,sum);
           sum=0;
   }

    return 0;
    }



