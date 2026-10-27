int test_func(void) {
    int v0 = 97;
    int v1 = 88;
    int v2 = 29;
    int v3 = 44;
    int v4 = 86;
    int v5 = 42;
    int v6 = 71;
    int i;
    v0 = 23;
    v3 = v3 * 2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
