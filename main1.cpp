#include<iostream>

void quickSort(int arr[], int left, int right) {

    int i = left, j = right;

    int tmp;

    int mediana = arr[(left + right) / 2];



    /* partition */

    while (i <= j) {

        while (arr[i] < mediana)

            i++;

        while (arr[j] > mediana)

            j--;

        if (i <= j) {

            tmp = arr[i];

            arr[i] = arr[j];

            arr[j] = tmp;

            i++;

            j--;

        }

    };



    /* recursion */

    if (left < j)

        quickSort(arr, left, j);

    if (i < right)

        quickSort(arr, i, right);

}
int main()
{
    int array[100];
    int n;
    std::cout<<"Please, enter n = ";
    std::cin>>n;
    std::cout<<"Please, enter array of numbers"<<std::endl;
    for(int i = 0;i<n;i++)
    {
        std::cin>>array[i];
    }
    quickSort(array,0,n);
    std::cout<<"Number, which we cant made from 2 other number = ";
    std::cout<<array[0];
}