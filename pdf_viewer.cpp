# include <bits/stdc++.h>
using namespace std;

int main(){
    int h[26];
    for ( int i=0;i<26;i++){
        cin >> h[i];
    }
    char h1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string text;
    cin >> text;
    int n=text.size();
    int h2[n];
    int h3[n];
    for ( int i=0;i<n;i++){
        for ( int j=0;j<26;j++){
            if(text[i]==h1[j]){
                h2[i]=j;
            }
        }
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<n;j++){
            if(h[i]==h2[j]){
                h3[j]=h[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        h3[i]=h[h2[i]];
    }
    int maxx=h3[0];
    for(int i=0;i<n;i++){
        if( h3[i] > maxx){
            maxx=h3[i];
        }
    }
    cout << n*maxx;
}
