#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    for (int i = 0; i < t; i++) {
        for (int j =0 ; j<=t; j++) {
            if (t-i-2<j){
                cout<<"*";
            }
            else {
                cout<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}