#include<iostream>
#include<climits>
using namespace std;


int main() {
    int arr[5]={1,2,3,4,5};
    int largest=INT_MIN;
    int size=5;
    for(int i=0;i<size;i++)
    {
        largest=max(largest,arr[i]);
    }
    cout<<largest<<endl;
    return 0;
    }
              

