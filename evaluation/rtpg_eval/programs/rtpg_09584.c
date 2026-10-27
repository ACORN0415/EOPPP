int test_func(void) {
    int v0 = 37;
    int v1 = 97;
    int v2 = 64;
    int v3 = 67;
    int v4 = 8;
    int v5 = 86;
    int i;
    v1 = v1 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
