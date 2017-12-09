/****solved****/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string str1,str2;
    cin>>t;
    while(t--){
        int n,a,large=-10000,small=10000;
        cin>>n;
        while(n--){
        string str;
        cin>>str>>a;
      if(large<a){
            large=a;
            str1=str;
      }
      if(small>a){
        small=a;
        str2=str;
      }

    }
    cout<<str1<<" "<<str2<<endl;
    }

   return 0;

}
