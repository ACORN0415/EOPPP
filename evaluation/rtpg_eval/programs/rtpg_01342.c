int test_func(void) {
    int v0 = 60;
    int v1 = 11;
    int v2 = 26;
    int i;
    v0 = 77;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
