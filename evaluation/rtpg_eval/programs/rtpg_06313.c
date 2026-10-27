int test_func(void) {
    int v0 = 4;
    int v1 = 65;
    int v2 = 98;
    int v3 = 39;
    int v4 = 71;
    int v5 = 37;
    int i;
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
