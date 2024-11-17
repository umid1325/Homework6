#include <iostream>
using namespace std;

int main() {
    int input[5];
    for (int i = 0; i < 5; i++) {
        cin >> input[i];
    }
    int dragons[input[4]];
    for(int i=0;i<input[4];i++) {
        dragons[i]=0;
    }
    for(int i=0;i<4;i++) {
        for(int j=input[i]-1;j<input[4];j+=input[i]) {
            dragons[j]=1;
        }
    }
    int sum=0;
    for(int i=0;i<input[4];i++) {
        sum+=dragons[i];
    }
    cout<<sum;

    return 0;
}
