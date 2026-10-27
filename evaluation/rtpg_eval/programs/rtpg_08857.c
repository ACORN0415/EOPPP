int __arr_8857[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 1;
    int v2 = 60;
    int v3 = 30;
    int v4 = 97;
    int v5 = 67;
    int v6 = 72;
    int v7 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_8857[i] = v3 + i; }
    if (v0 > v2) { v0 = v2; }
    v0 = v0 - v6;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v5;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
