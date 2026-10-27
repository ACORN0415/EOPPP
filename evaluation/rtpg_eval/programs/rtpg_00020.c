int __arr_20[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 69;
    int v2 = 19;
    int v3 = 72;
    int v4 = 71;
    int i;
    for (i = 0; i < 10; i++) { __arr_20[i] = v3 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
