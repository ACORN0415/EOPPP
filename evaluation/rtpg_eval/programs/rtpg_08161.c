int test_func(void) {
    int v0 = 64;
    int v1 = 57;
    int v2 = 77;
    int v3 = 23;
    int v4 = 64;
    int v5 = 63;
    int v6 = 3;
    int i;
    v5 = v5 - v1;
    v3 = v3 + v5;
    if (v4 > v5) { v4 = v5; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
