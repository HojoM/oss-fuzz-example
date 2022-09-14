#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "char_lib.h"

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  char *ns = malloc(size+1);
  memcpy(ns, data, size);
  ns[size] = '\0';
  
  count_lowercase_letters(ns);
  
  free(ns);
  return 0;
}
