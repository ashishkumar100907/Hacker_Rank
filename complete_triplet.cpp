# include <iostream>
using namespace std;

int main(){
    int a[3],b[3];
    int s[2];
    int alice=0,bob=0;
    for(int i=0;i<3;i++){
        cin >> a [i];
    }
    for (int i=0;i<3;i++){
        cin >> b[i];
    }
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            alice++;
        }
        else if (a[i]<b[i]){
            bob++;
        }
        else{
            alice=alice;
            bob=bob;
        }
    }
    s[0]=alice;
    s[1]=bob;
    cout << s[0] << " " << s[1];
}
