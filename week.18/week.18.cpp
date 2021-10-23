// week.18.cpp : 
//
using namespace std;
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include < conio.h>
#include <stdio.h>
int main()
{
           HANDLE Concole;
    setlocale(LC_ALL, "rus");


     // Задание.5.15

    // srand(time(NULL));                                        
    //  const int m = 7;
    //  const int n = 7;
    //  int arrA[m][n];
    //  int arrB[m][n];
    //  int arrC[m][n];     
    //   int count = 0;
    //  cout << "Матрица A "<< endl;    
    //  for (int i = 0; i < m; i++)
    //  {
    //      for (int j = 0; j < n; j++)
    //      {
    //          arrA[i][j] = rand() % 3;
    //          if (i == j)
    //          {
    //              cout << "\x1b[31m" << arrA[i][j] << "\x1b[0m ";
    //          }
    //          else
    //          {
    //          cout << arrA[i][j] << " ";

    //          }

    //      }
    //         cout << endl;
    //  }     
    //   cout << "Матрица B "<<endl;
    //for (int i = 0; i < m; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {    
    //        arrB[i][j] = rand() % 3;
    //    
    //        if (i == j)
    //        {               
    //            cout << "\x1b[31m" << arrB[i][j] << "\x1b[0m ";
    //        }
    //        else
    //        {
    //            cout << arrA[i][j] << " ";

    //        }
    //    }
    //    cout << endl;
    //}
    //     cout << "Матрица С " << endl;
    //for (int i = 0; i < m; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {
    //      arrC[i][j] = arrA[i][j] + arrB[i][j];
    //       cout << arrC[i][j] << " ";
    //    }
    //      cout << endl;
    //}

    //for (int i = 0; i < m; i++)
    //{
    //for (int j = 0; j<n;  j++)
    //{
    //    if (  arrC[i][j] == 0)
    //    {                 
    //        count++;                
    //    }            
    //}
    //}
    //    cout << "Количество нулей в матрице С = " << count << endl;

    // Задание 5.16

        //srand(time(NULL));
        //int const m = 3;
        //int const n = 3;
        //int arr[m][n];
        //cout << "Матрица A " << endl;
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        arr[i][j] = rand() % 10;
        //        cout << arr[i][j] << " ";
        //    }
        //    cout << endl;
        //}
        //int max = arr[0][0];
        //int row = 0;

        //for (int i = 0; i < m; i++)
        //{
        //    for(int j = 0; j < n;j++)
        //    {

        //       if (arr[row][j]> max )
        //       {                  
        //        max =arr[i][j];
        //       }
        //      cout << endl;
        //    }
        //}
        //      cout << "MAX = " << max << endl;

      // Задание 5.17

       //srand(time(NULL));
       // int const m = 3;
       // int const n = 3;
       // int arr[m][n];
       // cout << "Матрица  " << endl;
       // for (int i = 0; i < m; i++)
       // {
       //     for (int j = 0; j < n; j++)
       //     {
       //         arr[i][j] = rand() % 10;
       //         cout << arr[i][j] << " ";
       //     }                
       //     cout << endl;
       // }
       // cout << "Измененная матрица /2:" << " "<<endl;
       // for (int i = 0; i < m; i++)
       // {
       //     for (int j = 0; j < n; j++)
       //     {
       //         arr[i][j] = arr[i][j]/2;
       //         cout << arr[i][j] << " ";
       //     }
       //     cout << endl;
       // }

       //Задание 5.18

        //srand(time(NULL));
        //int const m = 7;
        //int const n = 7;
        //int arr[m][n];        
        //cout << "Матрица A " << endl;
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        arr[i][j] = rand() % 10;
        //        cout << arr[i][j] << " ";
        //    }
        //    cout << endl;
        //}
        // int max = arr[0][0];
        // int row = 0;
        //for (int i = 0; i < m; i++)
        //{
        //    for(int j = 0; j < n;j++)
        //    {

        //       if (arr[row][j] > max )
        //       {                  
        //           max = arr[i][j];
        //       }   
        //                          
        //    }              
        //}
        //    cout <<  "Max = ""\x1b[33m" << max << "\x1b[0m ";
               
       //Задание 5.20

  /*     srand(time(NULL));
        int const n = 4;
        int arr[n][n];        
        cout << "Матрица A " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = rand() % 27-17;
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
         int sum = 0;     
         int sumCrat = 0;
         for (int i = 0; i < n; i++)
         {
             for (int j = 0; j < n; j++)
             {
                 if (i + j + 1 == n)
                 {
                     sum += arr[i][j];
                 }             
                 if (i + j + 1 > n && arr[i][j] % 2 == 0 && arr[i][j] % 3 == 0)
                 {
                        sumCrat += arr[i][j];
                 } 
             }
         }    
         
         cout <<"Сумма элементов побочной диагонали = " << sum << endl;
         cout <<"Сумма элементов справа от побочной диагонали кратны 2 и 3 = " << sumCrat << endl;                       */

        // Задание 5.21

    //srand(time(NULL));
    //    int const m = 6;
    //    int const n = 3;
    //    int arr[m][n];
    //    int arr1[n][m];     
    //    cout << "Матрица A " << endl;
    //    for (int i = 0; i < m; i++)
    //    {
    //        for (int j = 0; j < n; j++)
    //        {
    //            arr[i][j] = rand() % 10;
    //            cout << arr[i][j] << " ";
    //        }
    //        cout << endl;
    //    }
    //    cout << "Транспортированная матрица с уменьшенными элементами в 2 раза :" << endl;
    //    for (int i = 0; i < n; i++) 
    //    {
    //        for (int j = 0; j < m; j++)
    //        {
    //            arr1[i][j] = arr[j][i]/2;
    //            cout << arr1[i][j] << " ";
    //        }
    //        cout << endl;
    //    }
     
     //Задание  5.22

    // srand(time(NULL));                                        
    //  const int m = 3;
    //  const int n = 3;
    //  int arrA[m][n];
    //  int arrB[m][n];
    //  int arrC[m][n];     
    //   int count = 0;
    //  cout << "Матрица A "<< endl;    
    // for (int i = 0; i < m; i++)
    // {
    //   for (int j = 0; j <n; j++)
    //   {
    //      arrA[i][j] = rand() %5-2; 
    //      cout << arrA[i][j] << " ";      
    //   }
    //   cout << endl;
    // }   
    //   cout << "Матрица B "<<endl;
    //for (int i = 0; i < m; i++)
    //{
    //    for (int j = 0; j < m; j++)
    //    {
    //     for (int i = 0; i < m; i++)

    //        arrB[i][j] = rand() % 5-2;
    //        cout << arrB[i][j] << " ";           
    //    
    //    }
    //    cout << endl;
    //}

    //     cout << "Матрица С " << endl;
    //for (int i = 0; i < m; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {
    //      arrC[i][j] = arrA[i][j] + arrB[i][j];
    //       cout << arrC[i][j] << " ";
    //    }
    //      cout << endl;
    //}

    //for (int i = 0; i < m; i++)
    //{
    // for (int j = 0; j<n;  j++)
    // {
    //    if (arrC[i][j] % 2==0 && arrC[i][j]< 0)
    //    {                 
    //        count++;                
    //    }            
    // }
    //}
    //    cout << "Количество четных отрицательных элементов = " << count << endl;

      //Задание 5.23

    //srand(time(NULL));
    //    int const m = 5;
    //    int const n = 5;
    //    float arr[m][n];   
    //    float count = 0;
    //    cout << "Матрица A " << endl;
    //    for (int i = 0; i < m; i++)
    //    {
    //        for (int j = 0; j < n; j++)
    //        {
    //            arr[i][j] = rand() %30 + 0.5;
    //            cout << arr[i][j] << " ";
    //        }
    //        cout << endl;
    //    }
    //    cout << endl;
    //    cout << "Усеченые элементы матрицы: " << endl;
    //   
    //    for (int i = 0; i < m; i++)
    //    {
    //        for (int j = 0; j < n; j++)
    //        {
    //            int element = int(arr[i][j]);

    //            if (element % 3 == 0 && element % 7 == 0)
    //            {
    //                count++;
    //                cout << "Элемент до усечения: " << arr[i][j] << endl;
    //            }                    
    //        } 
    //       
    //    }
    //    cout << endl;
    //    cout << "Количество элементов = " << count << endl;

     // Задание 5.24     

 /*   srand(time(NULL));
        int const n = 3;
        int arr[n][n];
        int positiv = 0;
        int b[n];
        cout << "Матрица A :" << " " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = rand() % 200-100;
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
       
        for (int i = 0; i < n; i++) 
        {
            positiv = 0;

            for (int j = 0; j < n; j++)
            {
                if (arr[j][i] > 0) {
                    positiv++;
                }
            }
           
            b[i] = positiv;
        }

        for (int i = 0; i < n; i++)
        {
            cout << "Количество положительных элементов "<< i <<" столбца = " << b[i]<< endl;
        }*/

  // Задание 5.25
  /*
    srand(time(NULL));
        int const m = 20;
        int const n = 10;
        int arr[m][n];
           
        cout << "Матрица X " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = rand()% 60-10;
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        int min = arr[0][0];
        int row = 0;
        int col = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] < min)
                {
                    min = arr[i][j];
                    row = i;
                    col = j;
                }             
            }
        }

        cout << "Строка " << row << endl;
        cout << "Столбец " << col << endl;*/
}


