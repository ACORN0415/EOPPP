int test_func(void) {
    int v0 = 76;
    int v1 = 25;
    int v2 = 62;
    int v3 = 36;
    int v4 = 3;
    int v5 = 99;
    int v6 = 0;
    int v7 = 89;
    int i;
    v7 = v7 + v0;
    v3 = v3 * 3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
