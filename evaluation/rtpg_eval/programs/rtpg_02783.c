int __arr_2783[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 84;
    int v2 = 97;
    int v3 = 92;
    int v4 = 57;
    int v5 = 11;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_2783[i] = v2 + i; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
