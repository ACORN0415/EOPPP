int test_func(void) {
    int v0 = 20;
    int v1 = 52;
    int v2 = 56;
    int v3 = 79;
    int i;
    v2 = 9;
    v0 = v0 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v1 = v1 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
