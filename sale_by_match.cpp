#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    sort(ar,ar+n);
    int ar2[n];
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(ar[i]==ar[j]){
                count++;
            }
        }
        ar2[i]=count;
    }
    int pair=0;
    for(int i=0;i<n;i++){
        int check=1;
        if(ar2[i]>1){
            while(ar[i]==ar[i+1]){
                check++;
                i++;
            }
            if(check>1){
                pair=pair+check/2;
            }
        }
    }
    cout << pair;
}