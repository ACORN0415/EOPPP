int __arr_9676[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 80;
    int v2 = 0;
    int v3 = 88;
    int i;
    v2 = v2 - v0;
    v2 = 11;
    for (i = 0; i < 10; i++) { __arr_9676[i] = v1 + i; }
    v2 = v2 ^ v0;
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
