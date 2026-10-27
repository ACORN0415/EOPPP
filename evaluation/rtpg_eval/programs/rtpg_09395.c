int test_func(void) {
    int v0 = 1;
    int v1 = 95;
    int v2 = 28;
    int v3 = 80;
    int v4 = 50;
    int v5 = 40;
    int i;
    v2 = 7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
