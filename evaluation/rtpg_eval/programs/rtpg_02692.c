int test_func(void) {
    int v0 = 69;
    int v1 = 1;
    int v2 = 2;
    int v3 = 49;
    int i;
    v0 = v0 * 9;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 ^ v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
