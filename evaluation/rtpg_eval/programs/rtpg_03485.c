int __arr_3485[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 97;
    int v2 = 96;
    int v3 = 93;
    int v4 = 7;
    int v5 = 16;
    int v6 = 45;
    int v7 = 47;
    int i;
    v6 = 7;
    for (i = 0; i < 10; i++) { __arr_3485[i] = v3 + i; }
    v7 = v7 * 6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
