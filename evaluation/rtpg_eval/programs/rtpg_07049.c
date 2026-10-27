int test_func(void) {
    int v0 = 15;
    int v1 = 59;
    int v2 = 54;
    int v3 = 87;
    int v4 = 73;
    int i;
    v0 = v0 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
