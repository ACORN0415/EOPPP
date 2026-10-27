int __arr_3719[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 35;
    int v2 = 55;
    int v3 = 68;
    int v4 = 68;
    int i;
    v4 = 93;
    v3 = v3 - v2;
    for (i = 0; i < 10; i++) { __arr_3719[i] = v4 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    v1 = v1 & v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
