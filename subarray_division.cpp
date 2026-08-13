# include <bits/stdc++.h> 
using namespace std;

int main(){
    int n,d,m;
    int ways=0;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    cin >> d >> m;
    for (int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<(m+i);j++){
            sum=sum+ar[j];
        }
        if(sum==d){
            ways++;
        }
    }
    cout << ways;
}