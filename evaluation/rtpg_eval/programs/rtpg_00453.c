int __arr_453[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 58;
    int v2 = 69;
    int i;
    for (i = 0; i < 10; i++) { __arr_453[i] = v1 + i; }
    v2 = v2 * 6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
