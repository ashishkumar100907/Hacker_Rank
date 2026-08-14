# include <bits/stdc++.h>
using namespace std;

int main(){
    int x1=0,x2=0,v1=0,v2=0;
    cin >> x1 >> v1 >> x2 >> v2;
    int n=0;
    for (int i=0;i<10000;i++){
       if(x1+(v1*i)==(x2+(v2*i))){
          n++;
       }    
    }

    if(n==1){
        cout << "YES";
    }
    else if(n==0){
        cout << "NO";
    }
}
