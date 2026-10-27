int test_func(void) {
    int v0 = 71;
    int v1 = 37;
    int v2 = 51;
    int v3 = 76;
    int v4 = 60;
    int i;
    if (v3 > v2) { v3 = v2; }
    v4 = v4 * 10;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
