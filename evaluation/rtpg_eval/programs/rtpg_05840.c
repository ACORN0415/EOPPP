int test_func(void) {
    int v0 = 57;
    int v1 = 7;
    int v2 = 89;
    int v3 = 11;
    int v4 = 63;
    int v5 = 89;
    int v6 = 81;
    int i;
    v0 = v0 * 4;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
