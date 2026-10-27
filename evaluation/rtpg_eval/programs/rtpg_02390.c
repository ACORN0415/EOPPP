int test_func(void) {
    int v0 = 64;
    int v1 = 11;
    int v2 = 56;
    int v3 = 73;
    int v4 = 61;
    int v5 = 55;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
