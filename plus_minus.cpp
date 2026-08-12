# include <iostream>
using namespace std;

int plusmius(int n){
    int ar[n];
    for (int i=0;i<n;i++){
        cin >> ar[i];
    }
    float pi=0,ni=0,zi=0;
    for (int i=0;i<n;i++){
        if(ar[i]>0){
            pi++;
        }
        else if(ar[i]<0){
            ni++;
        }
        else{
            zi++;
        }
    }
    float to=pi+ni+zi;
    float pif,nif,zif;
    pif=pi/to;
    nif=ni/to;
    zif=zi/to;
    cout << pif << endl << nif << endl << zif ;
    return 0;
}
int main(){
    int a;
    cin >> a;
    plusmius(a);
}
