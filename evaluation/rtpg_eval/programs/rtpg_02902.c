int test_func(void) {
    int v0 = 32;
    int v1 = 16;
    int v2 = 43;
    int v3 = 62;
    int v4 = 32;
    int v5 = 67;
    int v6 = 96;
    int i;
    v0 = v0 - v3;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
