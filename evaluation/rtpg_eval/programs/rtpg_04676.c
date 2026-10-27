int test_func(void) {
    int v0 = 90;
    int v1 = 77;
    int v2 = 86;
    int v3 = 49;
    int v4 = 85;
    int i;
    v4 = v4 * 6;
    v4 = v4 + v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
