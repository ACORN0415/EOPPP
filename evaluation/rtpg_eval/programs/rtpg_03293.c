int __arr_3293[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 21;
    int v2 = 50;
    int i;
    for (i = 0; i < 10; i++) { __arr_3293[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
