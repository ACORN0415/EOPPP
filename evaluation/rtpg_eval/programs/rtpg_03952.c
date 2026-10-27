int test_func(void) {
    int v0 = 74;
    int v1 = 98;
    int v2 = 16;
    int v3 = 85;
    int v4 = 9;
    int v5 = 38;
    int v6 = 4;
    int i;
    v4 = v4 * 5;
    v2 = 15;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
