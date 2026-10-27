int test_func(void) {
    int v0 = 20;
    int v1 = 54;
    int v2 = 77;
    int i;
    v2 = v2 ^ v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
