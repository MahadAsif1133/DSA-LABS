
#include <iostream>
#include <vector>
using namespace std;
vector<int> findIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) indices.push_back(i);
    }
    return indices;
}
int main() {
    vector<int> arr1 = {1, 2, 3, 2, 4, 2};
    vector<int> res1 = findIndices(arr1, 2);
    for (int i:res1) cout<<i<< " ";
    cout << endl;
    vector<int> arr2 = {5, 6, 7, 8};
    vector<int> res2 = findIndices(arr2, 10);
    for (int i : res2) cout<<i<<" ";
    cout << endl;
    vector<int> arr3 = {};
    vector<int> res3 = findIndices(arr3, 1);
    for (int i : res3) cout<<i<< " ";
    cout << endl;
}
