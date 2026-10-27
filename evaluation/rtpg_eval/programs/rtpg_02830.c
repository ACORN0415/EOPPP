int test_func(void) {
    int v0 = 64;
    int v1 = 81;
    int v2 = 31;
    int v3 = 60;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v2;
    }
    if (v1 > v2) { v1 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
