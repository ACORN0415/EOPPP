int test_func(void) {
    int v0 = 37;
    int v1 = 37;
    int v2 = 93;
    int v3 = 88;
    int i;
    if (v0 > v1) { v0 = v1; }
    v1 = 50;
    v2 = v2 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
