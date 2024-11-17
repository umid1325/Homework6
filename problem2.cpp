#include <iostream>
#include <math.h>
#include <valarray>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    bool flag = 1;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    float avgs[m+n];
    for (int i = 0; i < m; i++) {
        float sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        avgs[i] += sum / n;
    }
    for (int i = 0; i < n; i++) {
        float sum = 0;
        for (int j = 0; j < m; j++) {
            sum += arr[j][i];
        }
        avgs[m+i] += sum / m;
    }
    for(int i=0;i<m+n;i++) {
        if(avgs[0]!=avgs[i]) {
            flag = 0;
        }
    }
    if(flag) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}