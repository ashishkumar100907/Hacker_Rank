# include <iostream>
using namespace std;

int main(){
    long ar[5];
    for(int i=0;i<5;i++){
        cin >> ar[i];
    }
    long maxx=ar[0];
    long minn=ar[0];
    for(int i=0;i<5;i++){
        if(ar[i]>maxx){
            maxx=ar[i];
        }
    }
    for (int i=0;i<5;i++){
        if(ar[i]<minn){
            minn=ar[i];
        }
    }
    long sum=0;
    for(int i=0;i<5;i++){
        sum=sum+ar[i];
    }
    cout << sum-maxx << " " << sum-minn ;
}
