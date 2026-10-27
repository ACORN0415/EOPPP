int test_func(void) {
    int v0 = 97;
    int v1 = 3;
    int v2 = 86;
    int v3 = 38;
    int v4 = 21;
    int v5 = 86;
    int i;
    v1 = 96;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
