int __arr_6542[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 97;
    int v2 = 36;
    int v3 = 16;
    int v4 = 74;
    int v5 = 8;
    int i;
    v5 = v5 * 3;
    for (i = 0; i < 10; i++) { __arr_6542[i] = v5 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
