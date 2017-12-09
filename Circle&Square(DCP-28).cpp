/***** solved******/
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
    double r,a,b,c;
    cin>>a>>r;
 b=floor(sqrt(2*pow(a,2)));
        c=floor(r);
    if(c==b) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

   }

return 0;

}

