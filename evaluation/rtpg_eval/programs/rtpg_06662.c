int test_func(void) {
    int v0 = 81;
    int v1 = 100;
    int v2 = 75;
    int v3 = 91;
    int v4 = 7;
    int v5 = 3;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
