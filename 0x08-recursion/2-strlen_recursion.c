#include "main.h"

int _strlen_recursion(const char *s) {
if (*s == '\0') {
return 0;
} else {
return 1 + _strlen_recursion(s + 1);
}
}
