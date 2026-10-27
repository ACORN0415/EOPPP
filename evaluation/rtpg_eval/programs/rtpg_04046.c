int test_func(void) {
    int v0 = 89;
    int v1 = 29;
    int v2 = 59;
    int v3 = 36;
    int v4 = 27;
    int v5 = 56;
    int i;
    v3 = v3 - v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    int *__p = &v5;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
