#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,a,sum;
    while(scanf("%d %d",&n,&m)!=EOF){
    sum=0;
       for(int j=0;j<m;j++){
            cin>>a;
            sum=sum+a;
       }
       int lsum=0,cnt=0;
       if(sum>=n)  cout<<"Project will finish within 1 day."<<endl;
       if(sum<n) {
            while(1){

                    lsum=lsum+sum;
                    cnt++;
                    if(lsum>=n){
            cout<<"Project will finish within "<<cnt<<" days."<<endl;
            break;
                    }
            }
       }
    }



    return 0;
}


