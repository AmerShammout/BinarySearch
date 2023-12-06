#include <iostream>
#include <string.h>
using namespace std;

int stringBinarySearch(string arr[] , int l , int h , string key);

int main()
{
string a[] = {"apple","banana","cheese","donut","eggplant","fish","grape","hummus","ice","jello","kinchi","lemon"};
cout<<"The Location Of Apple Is : "<<stringBinarySearch(a,0,12,"apple")<<endl;
cout<<"The Location Of Donut Is : "<<stringBinarySearch(a,0,12,"donut")<<endl;
cout<<"The Location Of Kinchi Is : "<<stringBinarySearch(a,0,12,"kinchi")<<endl;
cout<<"The Location Of Lemon Is : "<<stringBinarySearch(a,0,12,"lemon")<<endl;
cout<<"The Location Of Spaghette Is : "<<stringBinarySearch(a,0,12,"spaghette")<<endl;
}

int stringBinarySearch(string arr[] , int l , int h , string key)
{
    while (h>=l)
    {
       int m = (l+h)/2;
       if(key.compare(arr[m])==0)
       {
        return m;
       }
       if(key.compare(arr[m])<0)
       {
        h = m - 1;
       }
       else
       {
        l = m + 1;
       }
    }
    return -1;
    
}