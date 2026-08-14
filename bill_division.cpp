# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int ar[n];
    int anna;
    for (int i=0;i<n;i++){
        cin >> ar[i];
    }
    cin >> anna;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+ar[i];
    }
    int bill=((sum-ar[k])/2);
    if(bill==anna){
        cout << "Bon Appetit";
    }
    else{
        cout << ((sum/2)-bill);
    }
}