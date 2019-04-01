#include<iostream>

int *input(int n)
{
    int *array = new int[n];
    for(int i = 0;i < n;i++)
    {
        std::cin>>array[i];
    }
    return array;

}
int sum(int arr[], int n)
{
    int s = 0;
    for(int i = 0;i< n ;i++)
    {
        s += arr[i];
    }

    return s;

}
int multiplicate(int arr[], int n)
{
    int m = 1;
    for(int i = 0; i < n;i++)
    {
    m = m * arr[i];
    }
    return m;
}
int checking(int arr[], int n)
{
    bool isZrost = true;
    int i = 0;
    for(int i = 0;i<n;i++)
    {
        if (arr[i]<0)
        {
            arr[i] = arr[i] * arr[i];
        }
    }
    while(isZrost == true && i<n-1)
    {

        if (arr[i]>arr[i+1])
        {
            isZrost = false;
            break;

        }
        i++;

    }
    if (isZrost==true)
    {
    return 0;
    }
    else
    {
        return 1;
    }
    
}
int main()
{
    
    int n;
    int rez ;
    std::cout<<"Please, enter n = "<<std::endl;
    std::cin>>n;
    std::cout<<"Please, enter array"<<std::endl;
    int *arr = input(n);
    if (checking(arr,n)==0)
    {
         rez = sum(arr,n);
         std::cout<<"Array zrostae, sum of elements = "<<rez;
    }
    else
    {
        rez = multiplicate(arr,n);
        std::cout<<"Array spadae, multiplicate of elements = "<<rez;
    }

    
}











