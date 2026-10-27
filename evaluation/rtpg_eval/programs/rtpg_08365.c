int test_func(void) {
    int v0 = 58;
    int v1 = 29;
    int v2 = 100;
    int v3 = 12;
    int v4 = 75;
    int v5 = 38;
    int v6 = 16;
    int i;
    v5 = v5 - v3;
    for (i = 0; i < 19; i++) {
        v5 = v5 + v5;
    }
    if (v2 > v1) { v2 = v1; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
