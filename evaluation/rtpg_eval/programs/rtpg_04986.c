int test_func(void) {
    int v0 = 75;
    int v1 = 29;
    int v2 = 23;
    int v3 = 22;
    int i;
    v1 = 47;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 | v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
