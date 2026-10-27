int test_func(void) {
    int v0 = 92;
    int v1 = 94;
    int v2 = 73;
    int v3 = 7;
    int i;
    v0 = v0 + v3;
    v1 = 25;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v1 = v1 & v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
