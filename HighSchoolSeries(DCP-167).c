#include<stdio.h>
#include<math.h>
int main()
{
 int i,t,j,n;
    long int sum=0;
  long int start;
      scanf("%d",&t);
   for(j=1;j<=t;j++){
         scanf("%d",&n);
    for (i=1;i<=n; i++){
                    start=i*i*i;
                      sum=sum+start;
    }
    printf ("Case %d: %ld\n",j,sum);
    sum=0;
    start=0;
   }

    return 0;
    }

