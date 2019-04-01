#include<iostream>

int* makeArr(int n)
{
 int *array = new int [n];
 for(int i = 0; i<n;i++)
 {
     array[i] = 2 * i - 5 ;
 }
 return array;
}
int countNegative(int n)
{
    int k = 0;
    int *arr = makeArr(n);
    for(int i = 0;i<n;i++)
    {
        if (arr[i]<0)
        {
            k++;
        }
    }
    delete[] arr;
    return k;
}
int main()
{
    int *arr = makeArr(7);
    std::cout<<"Your massiv : "<<std::endl;
    for(int i = 0; i<7;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    int k = countNegative(7);
    std::cout<<"There are "<<k<<" negative numbers"<<std::endl;
}