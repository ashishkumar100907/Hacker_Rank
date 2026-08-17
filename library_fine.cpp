# include <bits/stdc++.h>
using namespace std;

int main(){
    int d1,m1,y1;
    int d2,m2,y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if(d1==d2 && m1==m2 && y1==y2){
        cout << 0;
    }
    else if(d1<d2 && m1==m2 && y1==y2){
        cout << 0 ;
    }
    else if(m1<m2 && y1==y2){
        cout << 0;
    }
    else if(y1<y2){
        cout << 0;
    }
    else if(d1>d2 && m1==m2 && y1==y2){
        cout << (d1-d2)*15 ;
    }
    else if(m1>m2&& y1==y2){
        cout << (m1-m2)*500;
    }
    else if(y1>y2){
        cout << 10000;
    }
}