int __arr_7556[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 7;
    int v2 = 6;
    int v3 = 84;
    int i;
    for (i = 0; i < 10; i++) { __arr_7556[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
