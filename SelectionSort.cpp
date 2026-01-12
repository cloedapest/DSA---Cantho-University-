//Sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Selection sort
    vector<int> v = {2, 3, 1, 5, 6};
    for(int i = 0; i < v.size(); i++){
        int min = v[i];
        int index = i;
        for(int j = i; j < v.size(); j++){
            if(min > v[j]){
                index = j;
            }
            swap(v[i], v[index]);
        }
    }
    for(int x: v) cout<<x<<" ";

    //Selection sort là một thuật toán đơn giản có độ phức tạp O(n^2)
    //Thuật toán tìm số nhỏ nhất sau đó đổi chỗ với phần tử v thứ i.
    //Như vậy với mỗi i đã tăng thì i - 1 đảm bảo đã được sắp xếp.

    //Cơ chế: Với mỗi vòng lặp i, tạo một min là biến tạp lưu trữ giá trị nhỏ nhất từ i tới v.size()
    //Khi đó vòng lặp j với nhiệm vụ so sánh phần tử đầu tiên từ i cho ới v.size() để tìm ra đâu là
    //phần tử nhỏ nhất và thế vào vị trí thứ i.
    //Mục đích của vòng lặp j là tìm ra vị trí index của số nhỏ nhất mỗi lần duyệt.

    // 2 3 1 5 6   i = 0
    // 1 3 2 5 6   i = 1
    // 1 2 3 5 6   i = 3
}