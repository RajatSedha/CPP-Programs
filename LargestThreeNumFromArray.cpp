#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int first,second,third;
    first = second = third = INT_MIN;
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    for(int i = 0;i<10;i++){
        if(a[i] > first){
            third = second;
            second = first;
            first = a[i];
        }
        else if(a[i]>second){
            third = second;
            second = a[i];
        }
        else if(a[i]>third){
            third = a[i];
        }
    }
    cout<<first<<" "<<second<<" "<<third<<" ";
    
    return 0;
}
