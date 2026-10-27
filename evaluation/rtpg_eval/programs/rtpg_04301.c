int test_func(void) {
    int v0 = 22;
    int v1 = 66;
    int v2 = 28;
    int v3 = 74;
    int v4 = 70;
    int v5 = 40;
    int i;
    v1 = 71;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
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
