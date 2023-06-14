#include "s21_string.h"

void *s21_to_lower(const char *string) {
  int count = s21_strlen(string);
  static char string_copy[1000] = {'\0'};
  for (int i = 0; i < count; i++) {
    string_copy[i] = string[i];
  }
  for (int i = 0; i < count; i++) {
    if (string_copy[i] >= 65 && string_copy[i] <= 90) {
      string_copy[i] += 32;
    }
  }
  char *string_result = string_copy;
  return (void *)string_result;
}
