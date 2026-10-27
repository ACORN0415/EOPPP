int __arr_5050[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 99;
    int v2 = 85;
    int v3 = 58;
    int v4 = 72;
    int v5 = 9;
    int v6 = 7;
    int i;
    for (i = 0; i < 10; i++) { __arr_5050[i] = v4 + i; }
    if (v3 > v1) { v3 = v1; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
