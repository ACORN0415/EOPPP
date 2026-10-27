int test_func(void) {
    int v0 = 52;
    int v1 = 25;
    int v2 = 50;
    int v3 = 94;
    int v4 = 53;
    int v5 = 43;
    int v6 = 91;
    int v7 = 60;
    int i;
    v4 = v4 * 7;
    v1 = v1 - v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
