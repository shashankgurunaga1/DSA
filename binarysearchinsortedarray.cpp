#include<iostream>

using namespace std;
int main(){
    int array[]={1,2,3,4,5,6,7};
    int t=3;
    int l=0;
    int mid=0;
    int u=7;
    while(l<=u){
        mid=(l+u)/2;
        if(array[mid]==t){
            cout<<mid<<"\n";
            break;
        }
        else if(array[mid]<t){
            l=mid+1;
        }
        else{
            u=mid-1;
        }
    }
    return 0;

}
