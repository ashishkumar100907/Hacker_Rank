# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    int maxx=ar[0];
    for(int i=0;i<n;i++){
        if(ar[i]>maxx){
            maxx=ar[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if (ar[i]==maxx){
            count++;
        }
    }
    cout << count << endl;
}
