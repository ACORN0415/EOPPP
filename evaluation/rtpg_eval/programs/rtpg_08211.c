int test_func(void) {
    int v0 = 79;
    int v1 = 20;
    int v2 = 5;
    int v3 = 29;
    int v4 = 43;
    int v5 = 77;
    int v6 = 63;
    int v7 = 57;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
