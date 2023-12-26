
#include <iostream>

using namespace std;
int firstOcc(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    
    int odd[12]={1, 2, 3, 3, 4,3, 3, 3, 3,3,3, 5};
    int k=3;
    cout<<"First occurence of 3 is at index of "<< firstOcc(odd, 12, 3)<<endl;
    cout<<"last occurence of 3 is at index of "<< lastOcc(odd, 12, 3);

    return 0;
}
