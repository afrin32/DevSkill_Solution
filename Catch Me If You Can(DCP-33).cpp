#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,v1,v2,d,T;
    cin>>t;
   for(int i=1;i<=t;i++){
        cin>>v1>>v2>>d>>T;
    if((((v2*T)+d)<(v1*T)) ||(d==0 && T!=0)) cout<<"Case "<<i<<": Abir will be arrested"<<endl;
        else  cout<<"Case "<<i<<": Abir will survive"<<endl;

   }

    return 0;
}
