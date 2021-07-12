//program to find second largest element in a given array of integers
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int largest,secondLargest;
    largest = secondLargest = INT_MIN;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0;i<10;i++){
        if(a[i]>largest){
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i]>secondLargest && a[i]!=largest ){
            secondLargest = a[i];
        }
    }
    if(secondLargest == INT_MIN){
        cout<<"No Second largest element";
    }
    else{
        cout<<"THe second largest number is: "<<secondLargest<<endl;
    }
    
    return 0;
}
