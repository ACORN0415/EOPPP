int test_func(void) {
    int v0 = 47;
    int v1 = 58;
    int v2 = 36;
    int v3 = 58;
    int i;
    v2 = 11;
    v2 = v2 * 2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
