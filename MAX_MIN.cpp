#include <iostream>
using namespace std;
int max(int arr[], int size)
{
  int max = INT16_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}
int min(int arr[], int size)
{
  int min = INT16_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}
int main()
{
  int size;
  int array[100];

  cout << "Enter the  size of the array";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }
  int maximum = max(array, size);
  int minimum = min(array, size);
  cout << "Max:" << maximum << endl;
  cout << "Min:" << minimum;
}