int __arr_1611[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 23;
    int v2 = 34;
    int v3 = 36;
    int v4 = 95;
    int v5 = 41;
    int v6 = 16;
    int v7 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_1611[i] = v5 + i; }
    v0 = v0 - v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v5 = v5 & v2;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
