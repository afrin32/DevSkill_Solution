/******solved*****/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
   for(int i=1;i<=t;i++){
        double cx,cy,r,px,py,a,b,dis;
         cin>>cx>>cy>>r>>px>>py;
         if(cx>px) a=cx-px;
         else a=px-cx;
          if(cy>py) b=cy-py;
         else b=py-cy;

          dis=sqrt(a*a+b*b);
          if(dis>r) cout<<"Case "<<i<<": "<<"Outside"<<endl;
          else if(dis<r) cout<<"Case "<<i<<": "<<"Inside"<<endl;
          else cout<<"Case "<<i<<": "<<"OnCircle"<<endl;

         }


    return 0;
}

