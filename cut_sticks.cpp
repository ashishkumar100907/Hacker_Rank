# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    sort(ar,ar+n);
    cout << n << endl;
    for(int j=0;j<n;j++){    
        int mini=ar[j];
        int count=0;
        if(ar[j]!=ar[j-1]){
            for(int i=0;i<n;i++){
                if(ar[i]!=0){
                    ar[i]=ar[i]-mini;
                    if(ar[i]!=0){
                    count++;  
                    }
                }
            }
            if(count!=0){
                cout << count << endl;
            }
        }
    }
}