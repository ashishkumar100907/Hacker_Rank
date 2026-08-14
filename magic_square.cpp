# include <bits/stdc++.h>
using namespace std;

bool ismagic(int a[3][3]){
        if (a[0][0]+a[0][1]+a[0][2]!=15){ return false;}
        if (a[1][0]+a[1][1]+a[1][2]!=15){ return false;}
        if (a[2][0]+a[2][1]+a[2][2]!=15){ return false;}
        
        if (a[0][0]+ a[1][0] + a[2][0] != 15){ return false;}
        if (a[0][1]+ a[1][1] + a[2][1] != 15){ return false;}
        if (a[0][2]+ a[1][2] + a[2][2] != 15) { return false;}
        
        if (a[0][0] + a[1][1] + a[2][2] != 15){ return false;}
        if (a[0][2] + a[1][1] + a[2][0] != 15){ return false;}
        return true;
}
    
int main(){
    int ar[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> ar[i][j];
        }
    }
    int digits[9]={1,2,3,4,5,6,7,8,9};
    int candidate[3][3];
    int mincost = 1e9;
    
    do{
        for (int r=0;r<3;r++){
            for (int c=0;c<3;c++){
                candidate[r][c] = digits[r*3+c];
            }
        }
        
        if (ismagic(candidate)){
            int currentcost=0;
            for(int r=0;r<3;r++){
                for(int c=0;c<3;c++){
                    currentcost+=abs(ar[r][c]- candidate[r][c]);
                }
            }
            mincost=min(mincost,currentcost);
        }
    }
    while(next_permutation(digits,digits+9));
    cout << mincost << endl;
    return 0;
}