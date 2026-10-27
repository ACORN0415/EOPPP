int test_func(void) {
    int v0 = 55;
    int v1 = 35;
    int v2 = 95;
    int v3 = 84;
    int i;
    v2 = v2 * 8;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
