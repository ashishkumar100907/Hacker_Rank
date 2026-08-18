# include <bits/stdc++.h>
using namespace std;

int main(){
    int b,x,y;
    cin >> b >> x >> y;
    int key[x];
    int usb[y];
    for(int i=0;i<x;i++){
        cin >> key[i];
    }
    for(int i=0;i<y;i++){
        cin >> usb[i];
    }
    sort(key,key+x);
    sort(usb,usb+y);
    int cost=key[0]+usb[0];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if((key[i]+usb[j])<=b){
                cost=max(cost,(key[i]+usb[j]));
            }
        }
    }
    if(cost > b){
        cout << -1;
    }
    else{
        cout << cost;
    }
}
