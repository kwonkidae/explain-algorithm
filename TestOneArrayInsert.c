#include <stdio.h>

void insert(int array[], int length, int tempArray[], int score, int insertIndex)
{
  int i;
  for (i = 0; i < length; i++)
  {
    if (i < insertIndex)
    {
      tempArray[i] = array[i];
    }
    else
    {
      tempArray[i + 1] = array[i];
    }
  }
  tempArray[insertIndex] = score;
}

int main()
{
  int scores[] = {90,
                  70,
                  50,
                  80,
                  60,
                  85};
  int length = sizeof(scores) / sizeof(scores[0]);
  int tempArray[length + 1];
  insert(scores, length, tempArray, 75, 2);

  int i;
  for (i = 0; i < length + 1; i++)
  {
    printf("%d,", tempArray[i]);
  }
  return 0;
}
