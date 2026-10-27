int __arr_1663[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 30;
    int v2 = 92;
    int v3 = 84;
    int v4 = 60;
    int v5 = 36;
    int i;
    for (i = 0; i < 10; i++) { __arr_1663[i] = v2 + i; }
    v3 = v3 + v3;
    v1 = v1 % (v2 + 1);
    int *__p = &v5;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
