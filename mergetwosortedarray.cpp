#include<iostream>
#include<array>
int merge(int ar[],int n,int b[],int m,int arr[]){
    int i=0,j=0;
    int k=0;
    while(i<n &&  j<m){
     if(ar[i]<b[j]){
         arr[k]=ar[i];
         k++;
         i++;
     }
    else{
        arr[k]=b[j];
        k++;
        j++;

    }
     }
    while(i<n){
        arr[k]=ar[i];
        k++;
        i++;
    }
     while(j<m){
        arr[k]=b[j];
        k++;
        j++;
    }
    return arr[k];
}
using namespace std;
int main(){
    int ar[4]={1,2,3,4};
    int i;
    cout<<"first array: \n";
    for(i=0;i<4;i++){
        cout<<"  "<<ar[i];
    }
    cout<<"\n";
    int j;
    cout<<"second array:  \n";
    int b[5]={3,4,5,6,7};
    for(j=0;j<5;j++){
        cout<<"  "<<b[j];
    }
    cout<<endl;
    //merge two sorted array
    int n=4;
    int m=5;
    int k;
    cout<<"merge array: \n";
    int arr[n+m];
    merge(ar,4,b,5,arr);
    for( k=0;k<n+m;k++){
        cout<<"   "<<arr[k];
    }
    return 0;
}






























