int __arr_135[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 29;
    int v2 = 36;
    int v3 = 49;
    int v4 = 94;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 10; i++) { __arr_135[i] = v2 + i; }
    v3 = v3 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
