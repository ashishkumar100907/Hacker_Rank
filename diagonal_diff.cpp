# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a ;
    int ar[a][a];
    for (int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            cin >> ar[i][j];
        }
    }
    int fd=0;
    int bd=0;
    int diff=0;
    for(int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            if(i==j){
                fd=fd+ar[i][j];
            }
            if((i+j)==(a-1)){
                bd=bd+ar[i][j];
            }
        }
    }
    if(fd>bd){
        diff=fd-bd;
    }
    else if( fd<bd){
       diff=bd-fd;
     }
     else{
         diff=0;
     }
     cout << diff;
}