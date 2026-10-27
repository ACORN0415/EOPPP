int __arr_210[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 44;
    int v2 = 84;
    int v3 = 25;
    int v4 = 65;
    int v5 = 40;
    int v6 = 28;
    int i;
    for (i = 0; i < 10; i++) { __arr_210[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
