# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    int ar2[2];
    for (int i=0;i<n;i++){
        cin >> ar[i];
    }
    int maxx=ar[0],minn=ar[0];
    int most=0,least=0;
    for(int i=0;i<n;i++){
        if(ar[i]>maxx){
            maxx=ar[i];
            most++;
        }
    }
    for(int i=0;i<n;i++){
        if(ar[i]<minn){
            minn=ar[i];
            least++;
        }
    }
    cout << most << " " << least;
}