int test_func(void) {
    int v0 = 94;
    int v1 = 31;
    int v2 = 8;
    int i;
    if (v2 > v0) { v2 = v0; }
    v0 = v0 * 5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
