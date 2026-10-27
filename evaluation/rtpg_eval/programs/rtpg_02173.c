int test_func(void) {
    int v0 = 82;
    int v1 = 10;
    int v2 = 86;
    int i;
    v1 = v1 * 3;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
