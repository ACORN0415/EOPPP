int test_func(void) {
    int v0 = 74;
    int v1 = 39;
    int v2 = 24;
    int v3 = 91;
    int v4 = 27;
    int i;
    v3 = v3 * 7;
    v2 = v2 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
