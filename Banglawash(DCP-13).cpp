/*****Solved******/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
         int a,b,c,d,innings1=0,innings2=0,flag=0;
         for(int i=0;i<2;i++){
            cin>>a>>b>>c>>d;
            innings1=a+b;
            innings2=c+d;
            if(innings1<=innings2) flag=1;
         }
            if(flag==1) cout<<"Miss"<<endl;
            else cout<<"Banglawash"<<endl;

    }


    return 0;
}




