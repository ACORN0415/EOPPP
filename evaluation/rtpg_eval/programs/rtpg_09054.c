int test_func(void) {
    int v0 = 63;
    int v1 = 67;
    int v2 = 73;
    int v3 = 24;
    int v4 = 38;
    int v5 = 17;
    int v6 = 3;
    int v7 = 11;
    int i;
    v7 = v7 - v6;
    if (v6 > v4) { v6 = v4; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v0 = v0 | v4;
    return v0;
}
int main(void) { return test_func(); }
