int __arr_6883[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 74;
    int v2 = 51;
    int v3 = 75;
    int v4 = 23;
    int i;
    v0 = v0 + v4;
    for (i = 0; i < 10; i++) { __arr_6883[i] = v0 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
