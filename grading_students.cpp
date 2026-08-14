# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    int ar2[20];
    for (int i=0;i<20;i++){
        ar2[i] = 5*(i+1);
    }
    for (int i=0;i<n;i++){
      if(ar[i]>=38){  
        for (int j=0;j<20;j++){
          if(ar[i] < ar2[j]){  
             int dif=(ar2[j]-ar[i]);
             if(dif < 3 && dif>0){
                 ar[i]=ar[i]+dif;
             }
          }
        }
       }
    }
    for(int i=0;i<n;i++){
        cout << ar[i] << endl;
    }
}