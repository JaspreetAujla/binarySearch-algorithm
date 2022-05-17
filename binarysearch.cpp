#include<iostream>
using namespace std;
int binarySearch(int array[], int m, int p, int num)
{
    if(m<=p)
    {
        int mid = (m + p)/2;
        if(array[mid] == num)
        return mid;
        
        if(array[mid] >num)
        return binarySearch (array, m, mid-1, num) ;
        if(array[mid] > num)
        return binarySearch (array, mid+1, p, num);
    }
    return -1;
}

int main(void)
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(array)/ sizeof(array[0]);
    int num=5;
    int index = binarySearch (array,0,n-1,num);
    if(index == -1)
    cout<< num <<"is not present in array";
    else
    cout<< num <<" is present at index " << index << " in the array ";
    return 0;
}