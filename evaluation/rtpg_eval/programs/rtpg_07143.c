int test_func(void) {
    int v0 = 18;
    int v1 = 69;
    int v2 = 82;
    int v3 = 25;
    int v4 = 48;
    int v5 = 30;
    int v6 = 59;
    int v7 = 0;
    int i;
    v0 = v0 + v0;
    v2 = v2 - v1;
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
