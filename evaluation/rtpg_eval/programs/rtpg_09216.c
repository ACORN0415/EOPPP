int __arr_9216[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 5;
    int v2 = 17;
    int v3 = 16;
    int v4 = 79;
    int v5 = 79;
    int v6 = 71;
    int i;
    for (i = 0; i < 10; i++) { __arr_9216[i] = v2 + i; }
    v2 = v2 * 4;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
