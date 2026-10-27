int test_func(void) {
    int v0 = 53;
    int v1 = 22;
    int v2 = 21;
    int i;
    v0 = v0 - v1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
