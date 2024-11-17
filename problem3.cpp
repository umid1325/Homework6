#include <iostream>
using namespace std;

int main() {
    int m,n,t;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    cin>>t;
    float changes[t][3];
    for(int i=0;i<t;i++) {
        int rowpos,columnpos;
        for(int j=0;j<3;j++) {
            cin>>changes[i][j];
        }
        rowpos = changes[i][0];
        columnpos = changes[i][1];
        arr[rowpos-1][columnpos-1] = changes[i][2];
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}