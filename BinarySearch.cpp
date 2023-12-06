#include <iostream>
using namespace std;

int binarySearch(int arr[] , int l , int h , int key);

int main()
{   
    int arr[] = {0,1,2,3,4,5,6,7,8};
    cout<<binarySearch(arr,0,8,9);
}
int binarySearch(int arr[] , int l , int h , int key)
{
 while (h>=l)
    {
        int m = (l+h)/2;
        if(arr[m]==key)
        {
            return m;
        }
        if(arr[m]<key)
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
    return -1;
    
}