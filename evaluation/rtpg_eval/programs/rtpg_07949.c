int test_func(void) {
    int v0 = 30;
    int v1 = 86;
    int v2 = 74;
    int v3 = 89;
    int v4 = 78;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v2;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
