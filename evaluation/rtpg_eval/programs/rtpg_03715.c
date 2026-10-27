int test_func(void) {
    int v0 = 77;
    int v1 = 62;
    int v2 = 46;
    int i;
    v1 = v1 * 2;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v1;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
