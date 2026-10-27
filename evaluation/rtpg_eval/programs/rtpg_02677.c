int __arr_2677[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 58;
    int v2 = 94;
    int v3 = 82;
    int v4 = 38;
    int v5 = 59;
    int v6 = 56;
    int v7 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_2677[i] = v3 + i; }
    for (i = 0; i < 14; i++) {
        v2 = v2 + v4;
    }
    v1 = v1 - v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
