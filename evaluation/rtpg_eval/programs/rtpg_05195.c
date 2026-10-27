int __arr_5195[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 11;
    int v2 = 42;
    int i;
    v2 = v2 + v1;
    for (i = 0; i < 10; i++) { __arr_5195[i] = v2 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
