# include <bits/stdc++.h>
using namespace std;

int main(){
    char ar[10];
    char ar2[8];
    for (int i=0;i<10;i++){
        cin >> ar[i];
    }
    if ( ar[0]=='1' && ar[1]=='2' && ar[8]=='A'){
        ar2[0]='0';
        ar2[1]='0';
        for (int i=2;i<8;i++){
            ar2[i]=ar[i];
        }
    }
    else if(ar[8]=='A' ){
        for (int i=0;i<8;i++){
            ar2[i]=ar[i];
        }
    }
    else if(ar[0]=='1' && ar[1]=='2' && ar[8]=='P'){
        for(int i=0;i<8;i++){
            ar2[i]=ar[i];
        }
    }
    else if(ar[1]<'8' && ar[0]=='0' && ar[8]=='P'){
        ar2[0]='1';
        ar2[1]=ar[1]+2;//why adding int to char possible but not char to char.
        for (int i=2;i<8;i++){
            ar2[i]=ar[i];
        }
    }
    else if((ar[1]=='8' || ar[1]=='9') && ar[8]=='P'){
        ar2[0]='2';
        ar2[1]=ar[1]-8;
        for (int i=2;i<8;i++){
            ar2[i]=ar[i];
        }
    }
    else if(ar[0]=='1' && (ar[1]=='0' || ar[1]=='1' || ar[1]=='2') && ar[8]=='P'){
        ar2[0]='2';
        ar2[1]=ar[1]+2;
        for(int i=2;i<8;i++){
            ar2[i]=ar[i];
        }
    }
    for (int i=0;i<8;i++){
        cout << ar2[i];
    }
}