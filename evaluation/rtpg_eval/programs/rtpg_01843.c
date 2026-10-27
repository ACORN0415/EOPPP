int test_func(void) {
    int v0 = 60;
    int v1 = 58;
    int v2 = 40;
    int v3 = 15;
    int i;
    v3 = 73;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
