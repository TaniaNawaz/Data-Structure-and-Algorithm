#include<iostream> 
using namespace std; 
void sortedarr(int arr[], int size)
 {
   int i, j, min, temp;
   for (i = 0; i < size- 1; i++)
       {
            min = i;
            for (j = i + 1; j < size; j++)
            {
			  if (arr[j] < arr[min])
              min = j;
              temp = arr[i];
             
            }
             arr[i] = arr[min];
             arr[min] = temp;
        }
}
int main() {
   int arr[] = { 9, 4, 5, 3, 10, 8, 1, 12, 6, 7 };
   int size = sizeof(arr)/ sizeof(arr[0]);
   int i;
   cout<<"Given array is:"<<endl;
   for (i = 0; i < size; i++)
   cout<< arr[i] <<" ";
   cout<<endl;
   sortedarr(arr, size);
   printf("\nSorted array is: \n");
   for (i = 0; i < size; i++)
   cout<< arr[i] <<" ";
   return 0;
}
