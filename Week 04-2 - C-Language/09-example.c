#include <stdio.h>

#define IS_VALID(x)  ((50<=x) && (x<=200))
#define VALID_MSG    "Good value.\n"
#define INVALID_MSG  "Bad value.\n"

int main()
{
  int val;

  printf("Enter a value: ");
  scanf("%d", &val);
  if (IS_VALID(val))
    printf(VALID_MSG);
  else
    printf(INVALID_MSG);

  return 0;
}

// Answer -> resource/09/exampleE:471

