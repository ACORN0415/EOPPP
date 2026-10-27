int test_func(void) {
    int v0 = 67;
    int v1 = 36;
    int v2 = 39;
    int v3 = 78;
    int v4 = 37;
    int v5 = 88;
    int v6 = 36;
    int v7 = 44;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v6;
    }
    v7 = v7 - v3;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
