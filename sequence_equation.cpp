#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    int ar2[n];
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
           if(i==ar[j]){
             for(int x=0;x<n;x++){
                if((j+1)==ar[x]){
                    ar2[i-1]=x+1;
                }
             }
           } 
        }
    }
    for(int i=0;i<n;i++){
        cout << ar2[i] << endl;
    }
}