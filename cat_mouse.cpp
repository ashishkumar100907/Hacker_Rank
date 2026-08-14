# include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int x,y,z;
        int d1=0,d2=0;
        cin >> x >> y >> z;
        d1=abs(x-z);
        d2=abs(y-z);
        if(d1>d2){
           cout << "Cat B" << endl;
        }
        else if(d1<d2){
            cout << "Cat A" << endl;
        }
        else{
            cout << "Mouse C" << endl;
        }
    }
}
