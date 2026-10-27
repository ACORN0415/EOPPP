int __arr_5543[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 56;
    int v2 = 71;
    int i;
    for (i = 0; i < 10; i++) { __arr_5543[i] = v1 + i; }
    v1 = 41;
    if (v1 > v1) { v1 = v1; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
