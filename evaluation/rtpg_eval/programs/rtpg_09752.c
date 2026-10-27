int test_func(void) {
    int v0 = 80;
    int v1 = 19;
    int v2 = 40;
    int v3 = 11;
    int v4 = 96;
    int v5 = 95;
    int i;
    if (v1 > v1) { v1 = v1; }
    v1 = v1 - v5;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
