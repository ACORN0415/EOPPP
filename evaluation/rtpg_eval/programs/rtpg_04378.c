int test_func(void) {
    int v0 = 1;
    int v1 = 50;
    int v2 = 1;
    int v3 = 87;
    int i;
    v1 = 36;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
