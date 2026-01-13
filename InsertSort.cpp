#include<bits/stdc++.h>
using namespace std;
int main(){
    //Insert sort
    vector<int> v = {2, 5, 3, 1, 6, 7, 1};
    for(int i = 1; i < v.size(); i++){
        int j = i;
        while(j > 0 && v[j] < v[j - 1]){
            swap(v[j], v[j - 1]);
            j--;
        }
    }
    for(int x: v) cout<<x<<" ";
}