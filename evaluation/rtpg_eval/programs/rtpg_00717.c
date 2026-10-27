int test_func(void) {
    int v0 = 28;
    int v1 = 70;
    int v2 = 35;
    int v3 = 35;
    int v4 = 20;
    int v5 = 7;
    int v6 = 12;
    int i;
    v2 = v2 * 7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
