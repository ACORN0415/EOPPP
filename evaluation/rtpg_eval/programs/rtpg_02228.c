int test_func(void) {
    int v0 = 50;
    int v1 = 47;
    int v2 = 72;
    int v3 = 87;
    int v4 = 79;
    int v5 = 99;
    int v6 = 7;
    int i;
    v3 = v3 + v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
