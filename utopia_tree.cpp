# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t[n];
    int tf[n];
    for(int i=0;i<n;i++){
        cin >> t[i];
    }
    for(int i=0;i<n;i++){
        int num=t[i];
        int height=1; 
        if((num%2)!=0){ 
          while(num>0){
            if((num%2)!=0){
                height=height*2;
            }
            else if((num%2)==0){
                height++;
            }
            tf[i]=height;
            num--;
          }
        }
        else if((num%2)==0 && num!=0){
           while(num>0){
            if((num%2)==0){
                height=height*2;
            }
            else if((num%2)!=0){
                height++;
            }
            else{
                height=1;
            }
            tf[i]=height;
            num--;
           }
        }
        else{
            tf[i]=height;
        }
    }
    for(int i=0;i<n;i++){
        cout << tf[i] << endl;
    }
}
