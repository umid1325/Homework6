#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int spot;
    vector<int> arr;
    int spots_available=0;
    while(cin>>spot) {
        arr.push_back(spot);
    }
    if(arr[0]==0 and arr[1]==0 and arr[2]!=0) {
        spots_available++;
    }
    if(arr[arr.size()-1] == 0 and arr[arr.size()-2] == 0 and arr[arr.size()-3] != 0) {
        spots_available++;
    }

    for(int i=1;i<arr.size()-1;i++) {
        if(arr[i]==0 and arr[i+1]==0 and arr[i-1]==0) {
            spots_available++;
        }
    }

    if (spots_available >= n) {
        cout<<"YES"<<endl;
    }else
        cout<<"NO"<<endl;
    return 0;
}
