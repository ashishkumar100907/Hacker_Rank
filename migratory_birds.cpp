# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for (int i=0;i<n;i++){
        cin >> ar[i];
    }
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
    int maxi=ar2[0];
    for(int i=0;i<n;i++){
        if(ar2[i]>maxi){
            maxi=ar2[i];
        }
    }
    int mini=0;
    for(int i=0;i<n;i++){
        if(ar2[i]==maxi){
            int mini2=ar[i];
            mini=min(ar[i-1],mini2);
        }
        
    }
    cout << mini;
}
