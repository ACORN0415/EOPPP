int __arr_8529[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 7;
    int v2 = 2;
    int v3 = 21;
    int v4 = 42;
    int v5 = 77;
    int i;
    for (i = 0; i < 10; i++) { __arr_8529[i] = v1 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
