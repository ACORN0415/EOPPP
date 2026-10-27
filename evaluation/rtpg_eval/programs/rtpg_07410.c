int __arr_7410[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 61;
    int v2 = 53;
    int v3 = 63;
    int v4 = 10;
    int i;
    for (i = 0; i < 19; i++) {
        v4 = v4 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_7410[i] = v0 + i; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
