int test_func(void) {
    int v0 = 93;
    int v1 = 32;
    int v2 = 60;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v0;
    }
    if (v2 > v0) { v2 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
