int __arr_3234[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 0;
    int v2 = 35;
    int v3 = 24;
    int v4 = 23;
    int v5 = 93;
    int v6 = 54;
    int v7 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_3234[i] = v4 + i; }
    v7 = v7 - v4;
    v1 = v1 * 2;
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
