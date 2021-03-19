#include <stdio.h>

void sort(int[], int);
int main()
{
  int scores[] = {90,
                  70,
                  50,
                  80,
                  60,
                  85};
  int length = sizeof(scores) / sizeof(scores[0]);
  sort(scores, length);
  int i;
  for (i = 0; i < length; i++)
  {
    printf("%d ", scores[i]);
  }
  return 0;
}

void sort(int arrays[0], int length)
{
  int i;
  int j;
  for (i = 0; i < length - 1; i++)
  {
    for (j = 0; j < length - i - 1; j++)
    {
      if (arrays[j] > arrays[j + 1])
      {
        int flag = arrays[j];
        arrays[j] = arrays[j + 1];
        arrays[j + 1] = flag;
      }
    }
  }
}
