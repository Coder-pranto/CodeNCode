//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

//*partition process of Quick sort
void rearrange(int arr[],int n){
    int j =0;
    for(int i =0; i<n; i++){
        if(arr[i]<0){
            if(i != j){
                swap(arr[j],arr[i]);
            } 
            j++;
        }
    }
}
//* Dutch National Flag Algorithm 
void reArrange(int arr[],int n){
    int low =0, high = n-1;
    while(low<high){
        if(arr[low]<0){
            low++;
        }else if(arr[high]>0){
            high--;
        }else{
            cout<<arr[low]<<" "<<arr[high]<<endl;
            swap(arr[low], arr[high]);
            cout<<arr[low]<<" "<<arr[high]<<endl;
        }
    }
}


//* Two pointer method

void reArrange2(int arr[],int n){
    int left =0; 
    int right = n-1;
    while(left<=right){
        if(arr[left]<0 and arr[right]<0){
            left +=1;
        }
        else if(arr[left]>0 and arr[right]>0){
            right -=1;
        }
        else if(arr[left]>0 and arr[right]<0){
            swap(arr[left] ,arr[right]);
        }else{
            left+=1;
            right-=1;
        }
    }
}


void displayArray(int arr[],int n){
    for(auto i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
	int arr[] = {1, 2, -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	rearrange(arr,n);
	displayArray(arr,n);
	reArrange(arr,n);
	displayArray(arr,n);
	reArrange2(arr,n);
	displayArray(arr,n);


 return 0;
}