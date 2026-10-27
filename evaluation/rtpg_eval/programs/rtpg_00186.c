int __arr_186[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 73;
    int v2 = 20;
    int i;
    if (v1 > v2) { v1 = v2; }
    v1 = v1 * 2;
    for (i = 0; i < 10; i++) { __arr_186[i] = v1 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
