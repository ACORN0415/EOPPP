int test_func(void) {
    int v0 = 70;
    int v1 = 61;
    int v2 = 44;
    int v3 = 42;
    int v4 = 69;
    int v5 = 23;
    int i;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
