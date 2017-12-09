/******solved*****/
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
   int t;
   cin>>t;
   char str[150];
   cin.getline(str,150);
   for(int j=1;j<=t;j++){
    cin.getline(str,150);
    int length;
    length=strlen(str);
 int cntA=0,cntB=0,cntC=0,cntD=0,cntE=0,cntF=0,cntG=0,cntH=0,cntI=0,cntJ=0, cntK=0,cntL=0,cntM=0,cntN=0,cntO=0,cntP=0,cntQ=0,cntR=0,cntS=0,cntT=0,cntU=0,cntV=0,cntW=0,cntX=0,cntY=0,cntZ=0;
    for(int i=0;i<length;i++){
        if(str[i]=='a') cntA++;
        if(str[i]=='b') cntB++;
        if(str[i]=='c') cntC++;
        if(str[i]=='d') cntD++;
        if(str[i]=='e') cntE++;
        if(str[i]=='f') cntF++;
        if(str[i]=='g') cntG++;
        if(str[i]=='h') cntH++;
        if(str[i]=='i') cntI++;
        if(str[i]=='j') cntJ++;
        if(str[i]=='k') cntK++;
        if(str[i]=='l') cntL++;
        if(str[i]=='m') cntM++;
        if(str[i]=='n') cntN++;
        if(str[i]=='o') cntO++;
        if(str[i]=='p') cntP++;
        if(str[i]=='q') cntQ++;
        if(str[i]=='r') cntR++;
        if(str[i]=='s') cntS++;
        if(str[i]=='t') cntT++;
        if(str[i]=='u') cntU++;
        if(str[i]=='v') cntV++;
        if(str[i]=='w') cntW++;
        if(str[i]=='x') cntX++;
        if(str[i]=='y') cntY++;
        if(str[i]=='z') cntZ++;

    }
    cout<<"Case "<<j<<":"<<endl;
    if(cntA>0) cout<<"a"<<" "<<cntA<<endl;
    if(cntB>0) cout<<"b"<<" "<<cntB<<endl;
    if(cntC>0) cout<<"c"<<" "<<cntC<<endl;
    if(cntD>0) cout<<"d"<<" "<<cntD<<endl;
    if(cntE>0) cout<<"e"<<" "<<cntE<<endl;
    if(cntF>0) cout<<"f"<<" "<<cntF<<endl;
    if(cntG>0) cout<<"g"<<" "<<cntG<<endl;
    if(cntH>0) cout<<"h"<<" "<<cntH<<endl;
    if(cntI>0) cout<<"i"<<" "<<cntI<<endl;
    if(cntJ>0) cout<<"j"<<" "<<cntJ<<endl;
    if(cntK>0) cout<<"k"<<" "<<cntK<<endl;
    if(cntL>0) cout<<"l"<<" "<<cntL<<endl;
    if(cntM>0) cout<<"m"<<" "<<cntM<<endl;
    if(cntN>0) cout<<"n"<<" "<<cntN<<endl;
    if(cntO>0) cout<<"o"<<" "<<cntO<<endl;
    if(cntP>0) cout<<"p"<<" "<<cntP<<endl;
    if(cntQ>0) cout<<"q"<<" "<<cntQ<<endl;
    if(cntR>0) cout<<"r"<<" "<<cntR<<endl;
    if(cntS>0) cout<<"s"<<" "<<cntS<<endl;
    if(cntT>0) cout<<"t"<<" "<<cntT<<endl;
    if(cntU>0) cout<<"u"<<" "<<cntU<<endl;
    if(cntV>0) cout<<"v"<<" "<<cntV<<endl;
    if(cntW>0) cout<<"w"<<" "<<cntW<<endl;
    if(cntX>0) cout<<"x"<<" "<<cntX<<endl;
    if(cntY>0) cout<<"y"<<" "<<cntY<<endl;
    if(cntZ>0) cout<<"z"<<" "<<cntZ<<endl;

   }

  return 0;

}
