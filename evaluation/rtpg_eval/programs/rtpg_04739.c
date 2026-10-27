int test_func(void) {
    int v0 = 51;
    int v1 = 91;
    int v2 = 96;
    int v3 = 98;
    int v4 = 29;
    int v5 = 77;
    int i;
    v2 = v2 * 9;
    int *__p = &v3;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
