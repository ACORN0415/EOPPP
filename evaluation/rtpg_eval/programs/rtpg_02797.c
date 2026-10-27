int test_func(void) {
    int v0 = 72;
    int v1 = 34;
    int v2 = 5;
    int v3 = 18;
    int i;
    v0 = v0 * 6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
