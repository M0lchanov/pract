#include <iostream>

using namespace std;

int main()
{
//1-------------
    // int array[7] = {2, 3, 4, 5, 2, 8, 10};
        
    //     for (int i = 0; i < 7; i++){
    //     cout << array[i];
    // }
//2-------------

    // int arr[] {500,4,24,15,100,105};
    
    // int arr_count = sizeof(arr) / sizeof(arr[0]);
    // // int sum;
    
    // // for (int i = 0; i < arr_count; i++){
    // //         sum += arr[i];
    // // }
    
    // int sum;
    // int a = 0;
    // while ( a < arr_count){
    //     sum += arr[a];
    //     a ++;
    // }
    
    // cout << sum;

//3-------------

//     int arr[] = {5, 4, 3, 4, 9};
    
//     int arr_size = sizeof (arr) / sizeof (arr[0]);
    
//     int even_count = 0;
//     int var;
//     cout << "enter variable: ";
//     cin >> var;
    
//     for (int i = 0; i < arr_size; i++){
//         if (arr[i] % var == 0){
//             even_count++;
//         }
// }
//     cout << "\n\nnumber of even elements: " << even_count;

//4-------------
//     int arr[] = {5, 4, 3, 4, 9};
//     int arr_size = sizeof (arr) / sizeof (arr[0]);
//     int min = arr[0];
    
//     for (int i = 0; i < arr_size; i++){
//         if (arr[i] < min){
//             min = arr[i];
//         }
// }
//     cout << "Min elements: " << min;

//5-------------

    // int arr[] = {5, 4, 3, 4, 9};
    // int arr_size = sizeof (arr) / sizeof (arr[0]);
    // int min = arr[0];
    // int max = arr[0];
    
    // for (int i = 0; i < arr_size; i++){
    //     if (arr[i] < min){
    //         min = arr[i];
    //     }
    // }
    // for (int i = 0; i < arr_size; i++){
    //     if (arr[i] > max){
    //         max = arr[i];
    //     }
    // }
    // cout << "Min element: " << min << "\nMax element: " << max << "\nDifference between largest and smallest elements: " << max - min;
    
//6------------

    // int arr[] = {5, 4, 3, 4, 9};
    // int arr_size = sizeof (arr) / sizeof (arr[0]);
    // int max = arr[0];
    // int PosOfMax = 0;

    // for (int i = 0; i < arr_size; i++){
    //     if (arr[i] > max){
    //         max = arr[i];
    //         PosOfMax = sizeof (arr) / sizeof (arr[i]);
    //     }
    // }
    // cout << "Max element: " << max << " Element position: " << PosOfMax;
    
    
//7-------------

    // int size = 5;
    // int *a = new int[size];
    
    // for (int i = 0; i < size; i++){
    //         cin >> a[i];
    // }
    // for (int i = 0; i < size / 2; i++){
    //         int b = a[i];
    //         a[i] = a[size - 1 - i];
    //         a[size - 1 - i] = b;
    // }
    
    // for (int i = 0; i < size; i++){
    //     cout << a[i];
    // }
    // delete[] a;

//8-------------

    // char stroka[] {"AaSsDd"};
    // int count = 0;
    // for (int i = 0; i < sizeof(stroka) / sizeof(stroka[0]); i++){
    // if(isupper(stroka[i])){
    //     ++count;
    //     }
    // }
    // cout << count;
    
//9-------------

    // char stroka[] {"AaSsDd"};
    // int A_count = 0;
    // char test_var = 'A';
    // for (int i = 0; i < sizeof(stroka) / sizeof(stroka[0]); i++){
    //     if(stroka[i] == test_var){
    //         ++A_count;
    //     }
    // }
    // cout << A_count;

//10--------------
    
    
    // char stroka[] {"AaSsDd"};
    
    //Код для ТОЛЬКО a, s, d
    
    // char test_var_1 = 'a';
    // char test_var_2 = 's';
    // char test_var_3 = 'd';
    // for (int i = 0; i < sizeof(stroka) / sizeof(stroka[0]); i++)
    //{
    //     if(stroka[i] == test_var_1){
    //         stroka[i] = 'A';
    //     }
    //     if(stroka[i] == test_var_2){
    //         stroka[i] = 'S';
    //     }
    //     if(stroka[i] == test_var_3){
    //         stroka[i] = 'D';
    //     }
    // }
    // cout << stroka;
    
    //Код для любых букв
    
    // char stroka[] {"aassdd"};
    // for(int i = 0; i < sizeof(stroka) / sizeof(stroka[0]); i++)
    // {
    //     stroka[i] = ((int)stroka[i] - 32);
    // }
    // cout << stroka;
      return 0;


}