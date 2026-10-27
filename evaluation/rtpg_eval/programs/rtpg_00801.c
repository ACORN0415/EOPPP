int test_func(void) {
    int v0 = 26;
    int v1 = 55;
    int v2 = 99;
    int v3 = 98;
    int v4 = 17;
    int v5 = 67;
    int i;
    v2 = v2 + v4;
    if (v1 > v0) { v1 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
