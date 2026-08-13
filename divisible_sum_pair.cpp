# include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0,k=0;
    cin >> n >> k;
    int ans=0;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    for (int i=0;i<n;i++){
        for(int j=(i+1);j<n;j++){
                if(((ar[i]+ar[j])%k)==0){
                    ans++;
                }
        }
    }
    cout << ans;
}