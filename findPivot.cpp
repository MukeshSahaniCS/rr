#include <iostream>

using namespace std;
int getPivot(int arr[], int n){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[mid+1]){
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
    
    int odd[7]={7,9,10,11,1,2,3};
    
    cout<<" The peak index is "<<getPivot(odd,7)<<endl;

    return 0;
}