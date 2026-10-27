int __arr_8333[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 18;
    int v2 = 75;
    int v3 = 21;
    int v4 = 4;
    int v5 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_8333[i] = v1 + i; }
    v4 = v4 + v1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v5 = v5 | v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
