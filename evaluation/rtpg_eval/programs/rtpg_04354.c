int test_func(void) {
    int v0 = 98;
    int v1 = 92;
    int v2 = 20;
    int v3 = 1;
    int v4 = 64;
    int v5 = 99;
    int v6 = 33;
    int i;
    for (i = 0; i < 5; i++) {
        v6 = v6 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
