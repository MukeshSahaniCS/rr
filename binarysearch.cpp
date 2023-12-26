#include <iostream>

using namespace std;
int firstOcc(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    
    int odd[12]={1, 2, 2,3, 5,6, 7, 8, 9,10,11, 12};
    int k=3;
    cout<<" 3 is at index of "<< firstOcc(odd, 12, 3)<<endl;

    return 0;
}
