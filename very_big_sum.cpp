# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    long sum=0;
    for (int i=0;i<n;i++){
        sum=sum+ar[i];
    }
    cout << sum;
}