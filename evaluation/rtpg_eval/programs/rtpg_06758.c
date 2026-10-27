int test_func(void) {
    int v0 = 57;
    int v1 = 38;
    int v2 = 32;
    int v3 = 86;
    int i;
    v0 = v0 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 / (v2 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
