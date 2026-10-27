int test_func(void) {
    int v0 = 29;
    int v1 = 81;
    int v2 = 49;
    int v3 = 49;
    int v4 = 0;
    int v5 = 68;
    int v6 = 36;
    int i;
    if (v5 > v6) { v5 = v6; }
    v4 = v4 - v2;
    v0 = 38;
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
