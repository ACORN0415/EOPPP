int test_func(void) {
    int v0 = 74;
    int v1 = 31;
    int v2 = 42;
    int v3 = 91;
    int v4 = 76;
    int v5 = 54;
    int i;
    v4 = 8;
    v1 = v1 * 10;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
