int __arr_4726[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 27;
    int v2 = 59;
    int v3 = 100;
    int v4 = 84;
    int v5 = 20;
    int v6 = 54;
    int v7 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_4726[i] = v7 + i; }
    v1 = v1 - v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
