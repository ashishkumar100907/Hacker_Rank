# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int like=floor(5/2),like2=2;
    for(int i=1;i<n;i++){
        if(like<=2){
            int share=like;
            int share2=share*3;
            like=like+floor(share2/2);
        }
        else{
            int share=like-like2;
            int share2=share*3;
            like=like+floor(share2/2);
            like2=like-floor(share2/2);
        }
    }
    cout << like ;
    
}
