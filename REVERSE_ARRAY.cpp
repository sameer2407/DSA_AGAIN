#include <iostream>
#include <array>
using namespace std;
void reverse(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main()
{

  int array[] = {45, 23, 12, 56, 32, 67, 19};
  int size = 7;
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  reverse(array, size);
  cout << endl;
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }

  return 0;
}