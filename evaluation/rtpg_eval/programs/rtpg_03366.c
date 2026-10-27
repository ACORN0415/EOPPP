int test_func(void) {
    int v0 = 4;
    int v1 = 99;
    int v2 = 25;
    int v3 = 9;
    int v4 = 63;
    int i;
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
