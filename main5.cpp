#include<iostream>

int main()
{
    const int n = 3;
    const int m = 4;
    int matrix[n][m];
    std::cout<<"Please,enter matrix "<<n<<"x"<<m<<std::endl;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            std::cin>>matrix[i][j];
        }
    }

    int max = matrix[0][0];
    int min = matrix[0][0];
    int mk,mc;

int i,j;
     for( i = 0;i<n;i++)
    {
        for( j = 0;j<m;j++)
        {
            if(max<matrix[i][j])
            {
                max = matrix[i][j];
                mk = i;
            }
             if(min>matrix[i][j])
            {
                mc = i;
            }
            
        }
    }
    std::cout<<"Rezult"<<std::endl;
int buf[m];
 for(int i = 0;i<m;i++)
 {
  buf[i] =matrix[mk][i];
 }


        for(int j = 0;j<m;j++)
         {
             matrix[mk][j] = matrix[mc][j];
         }
         for(int i = 0;i<m;i++)
         {
             matrix[mc][i] = buf[i];

         }

        for(int i = 0;i<n;i++)
     {
             for(int j = 0;j<m;j++)
             {
                 std::cout<<matrix[i][j]<<" ";

             }

             std::cout<<std::endl;
         }

}
