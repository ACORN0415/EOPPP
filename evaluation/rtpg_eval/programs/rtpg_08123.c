int test_func(void) {
    int v0 = 87;
    int v1 = 59;
    int v2 = 79;
    int v3 = 54;
    int v4 = 52;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
