int test_func(void) {
    int v0 = 85;
    int v1 = 7;
    int v2 = 45;
    int v3 = 24;
    int v4 = 1;
    int i;
    v4 = v4 * 6;
    v0 = 11;
    int *__p = &v2;
    *__p = *__p + 1;
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
