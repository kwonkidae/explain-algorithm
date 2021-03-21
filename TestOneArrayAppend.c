#include <stdio.h>
#include <string.h>

int main()
{
  int scores[] = {90, 70, 50, 80, 60, 85};
  int length = sizeof(scores) / sizeof(scores[0]);
  int i;
  int tempArray[length + 1];

  for (i = 0; i < length; i++)
  {
    tempArray[i] = scores[i];
  }

  tempArray[length] = 75;
  // memcpy(scores, tempArray, sizeof(tempArray));
  for (i = 0; i < length + 1; i++)
  {
    printf("%d,", tempArray[i]);
  }
  return 0;
}
