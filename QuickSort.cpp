#include<bits/stdc++.h>
using namespace std;
int findPivot(vector<int> &v, int i, int j){
    int first = v[i], k = i + 1;
    while(k <= j && v[k] == first){
        k++;
    }
    if(k > j) return -1;
    else{
        if(v[k] > first){
            return k;
        }
        else return i;
    }
}
int Partition(vector<int> &v, int i, int j, int pivot){
    int L = i, R = j;
    while(L <= R){
        while(v[L] < pivot) L++;
        while(v[R] >= pivot) R--;
        
        if(L < R){
            swap(v[L], v[R]);
        }
    }
    return L;
}
void QuickSort(vector<int> &v, int i, int j){
    int pivotindex = findPivot(v, i, j);

    if(pivotindex != -1){
        int pivot = v[pivotindex];
        int k = Partition(v, i, j, pivot);
        QuickSort(v, i, k - 1);
        QuickSort(v, k, j);
    }
}
int main(){
    vector<int> v = {5, 5, 5, 4, 7, 4, 6, 1};
    QuickSort(v, 0, v.size() - 1);
    for(int x: v) cout<<x<<" ";
}