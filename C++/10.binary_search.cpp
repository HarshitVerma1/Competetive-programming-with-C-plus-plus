#include<iostream>
using namespace std;
int main()
{
    int low=0,high=10,mid,key;
    cin>>key; // that is searching element which will  searched by user
    int A[]={1,2,44,54,67,88,90,94,97,101,106};
    while (low<=high)
    {
        mid=(low+high)/2;
        if (A[mid]==key)
        {
            printf("\nKey find at index = %d\n",mid);
            return 0;
        }
        
        else if (A[mid]<key)
        {
            low=mid+1;
        }
        else // if (mid<key)
        {
            high=mid-1;
        }
    }
    printf("\nNot Found");
    
}