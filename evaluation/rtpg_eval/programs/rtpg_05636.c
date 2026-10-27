int test_func(void) {
    int v0 = 71;
    int v1 = 64;
    int v2 = 23;
    int v3 = 19;
    int v4 = 67;
    int i;
    v0 = v0 * 4;
    v1 = v1 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
