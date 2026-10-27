int test_func(void) {
    int v0 = 88;
    int v1 = 99;
    int v2 = 50;
    int v3 = 0;
    int v4 = 98;
    int v5 = 50;
    int i;
    if (v1 > v5) { v1 = v5; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
