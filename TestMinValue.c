#include <stdio.h>
int min(int arrays[], int length)
{
  int minIndex = 0;
  int j;
  for (j = 1; j < length; j++)
  {
    if (arrays[minIndex] > arrays[j])
    {
      minIndex = j;
    }
  }
  return arrays[minIndex];
}

int main()
{
  int scores[] = {60,
                  80,
                  95,
                  50,
                  70};
  int length = sizeof(scores) / sizeof(scores[0]);
  int minValue = min(scores, length);
  printf("Min Value = %d\n", minValue);
}
