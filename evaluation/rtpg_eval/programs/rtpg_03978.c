int test_func(void) {
    int v0 = 81;
    int v1 = 79;
    int v2 = 23;
    int v3 = 53;
    int v4 = 5;
    int i;
    v2 = 92;
    v0 = v0 * 4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
