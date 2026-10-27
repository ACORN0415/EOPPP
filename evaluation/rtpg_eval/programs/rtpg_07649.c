int test_func(void) {
    int v0 = 32;
    int v1 = 24;
    int v2 = 78;
    int v3 = 29;
    int i;
    v3 = v3 - v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
