int test_func(void) {
    int v0 = 41;
    int v1 = 39;
    int v2 = 67;
    int v3 = 30;
    int v4 = 1;
    int v5 = 49;
    int v6 = 57;
    int i;
    if (v5 > v2) { v5 = v2; }
    v1 = 85;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
