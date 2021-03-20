#include <stdio.h>

void sort(int arrays[], int length)
{
  int minIndex;
  int i;
  int j;
  for (i = 0; i < length - 1; i++)
  {
    minIndex = i;
    int minValue = arrays[minIndex];
    for (j = i; j < length - 1; j++)
    {
      if (minValue > arrays[j + 1])
      {
        minValue = arrays[j + 1];
        minIndex = j + 1;
      }
    }

    if (i != minIndex)
    {
      int temp = arrays[i];
      arrays[i] = arrays[minIndex];
      arrays[minIndex] = temp;
    }
  }
}

int main()
{
  int scores[] = {90, 70, 50, 80, 60, 85};
  int length = sizeof(scores) / sizeof(scores[0]);
  sort(scores, length);
  int i;
  for (i = 0; i < length; i++)
  {
    printf("%d,", scores[i]);
  }
  return 0;
}
