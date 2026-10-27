int test_func(void) {
    int v0 = 68;
    int v1 = 27;
    int v2 = 41;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 5; i++) {
        v1 = v1 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
