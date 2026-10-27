int test_func(void) {
    int v0 = 7;
    int v1 = 30;
    int v2 = 13;
    int v3 = 61;
    int v4 = 46;
    int v5 = 15;
    int i;
    v3 = v3 - v4;
    v3 = v3 + v3;
    v2 = v2 * 8;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
