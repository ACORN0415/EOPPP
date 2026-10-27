int test_func(void) {
    int v0 = 90;
    int v1 = 92;
    int v2 = 17;
    int v3 = 74;
    int v4 = 21;
    int v5 = 40;
    int i;
    if (v0 > v1) { v0 = v1; }
    for (i = 0; i < 18; i++) {
        v3 = v3 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
