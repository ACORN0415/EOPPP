int test_func(void) {
    int v0 = 14;
    int v1 = 94;
    int v2 = 55;
    int v3 = 45;
    int v4 = 96;
    int v5 = 32;
    int i;
    v4 = v4 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
