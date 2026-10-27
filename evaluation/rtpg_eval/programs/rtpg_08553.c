int __arr_8553[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 93;
    int v2 = 74;
    int v3 = 62;
    int i;
    if (v3 > v2) { v3 = v2; }
    v2 = 26;
    for (i = 0; i < 10; i++) { __arr_8553[i] = v2 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
