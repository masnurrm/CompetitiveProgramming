#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, arr[1001], sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;

    return 0;
}