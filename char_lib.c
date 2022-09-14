#include <stdlib.h>
#include <stdio.h>

// Count the number of lowercase letters
// input must be a null-terminated string.
int count_lowercase_letters(char *input) {
	int length = 0;
  int lowercase_letters = 0;

  while (1) {
    if (input[length] == '\0') {
      break;
    }
    length++;
  }
  
  if (length == 0) {
    return 0;
  }

  for (int i = 0; i < length; i++) {
    if (input[i] >= 0x61 && input[i] <= 0x7a) {
      lowercase_letters++;
    }
  }

  if (lowercase_letters == 42) {
    printf("wooo\n");
  }
  if (lowercase_letters == 0x42) {
    printf("WOOO!\n");
  }

  return lowercase_letters;
}
