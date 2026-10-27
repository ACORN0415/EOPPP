int test_func(void) {
    int v0 = 66;
    int v1 = 51;
    int v2 = 69;
    int v3 = 88;
    int v4 = 35;
    int v5 = 57;
    int v6 = 40;
    int v7 = 62;
    int i;
    if (v7 > v6) { v7 = v6; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
