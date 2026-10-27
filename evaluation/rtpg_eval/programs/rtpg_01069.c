int test_func(void) {
    int v0 = 82;
    int v1 = 0;
    int v2 = 63;
    int v3 = 22;
    int v4 = 53;
    int v5 = 19;
    int v6 = 92;
    int i;
    v3 = v3 - v0;
    v1 = v1 * 3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
