# include <bits/stdc++.h>
using namespace std;

int main(){
    int s=0,t=0;
    int a=0,b=0;
    int m=0,n=0;
    cin >> s >> t >> a >> b >> m >> n;
    int ar[m];
    int ar2[n];
    for(int i=0;i<m;i++){
        cin >> ar[i];
    }
    for(int i=0;i<n;i++){
        cin >> ar2[i];
    }
    int apple=0,orange=0;
    for(int i=0;i<m;i++){
        if(a+ar[i]>=s && a+ar[i] <= t){
            apple++;
        }
    }
    for(int i=0;i<n;i++){
        if(b+ar2[i]>=s && b+ar2[i]<=t){
            orange++;
        }
    }
    cout << apple << endl << orange;
}