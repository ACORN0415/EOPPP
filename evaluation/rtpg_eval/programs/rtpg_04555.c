int __arr_4555[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 30;
    int v2 = 72;
    int v3 = 7;
    int v4 = 5;
    int v5 = 26;
    int i;
    for (i = 0; i < 10; i++) { __arr_4555[i] = v4 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
