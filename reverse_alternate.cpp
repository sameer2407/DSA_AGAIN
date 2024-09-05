#include <iostream>
using namespace std;

void reverseAlternate(int arr[], int size)
{
  int i = 0;
  int j = i + 1;
  while (j < size)
  {
    swap(arr[i], arr[j]);
    i = i + 2;
    j = j + 2;
  }
}
int main()
{

  int array[] = {50, 20, 30, 29, 40, 60, 12};
  int size = 7;
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  reverseAlternate(array, size);
  cout << endl;
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  return 0;
}