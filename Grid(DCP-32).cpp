/***solved****/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
            int X1,Y1,X2,Y2,a=0,b=0,ans=0;
          cin>>X1>>Y1>>X2>>Y2;
         if(X1>X2) a=X1-X2;
          else a=X2-X1;
          if(Y1>Y2) b=Y1-Y2;
          else b=Y2-Y1;

          ans=a+b;
          cout<<"Case "<<i<<": "<<ans<<endl;

    }




  return 0;
}

