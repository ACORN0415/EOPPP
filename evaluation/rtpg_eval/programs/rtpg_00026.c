int test_func(void) {
    int v0 = 88;
    int v1 = 22;
    int v2 = 74;
    int v3 = 14;
    int v4 = 28;
    int v5 = 76;
    int v6 = 61;
    int v7 = 81;
    int i;
    v1 = 32;
    v7 = v7 * 5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
