int __arr_4710[10];
int test_func(void) {
    int v0 = 16;
    int v1 = 58;
    int v2 = 24;
    int v3 = 57;
    int v4 = 92;
    int v5 = 7;
    int v6 = 96;
    int v7 = 26;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) { __arr_4710[i] = v1 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
