int __arr_152[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 81;
    int v2 = 58;
    int v3 = 85;
    int v4 = 62;
    int v5 = 13;
    int v6 = 7;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_152[i] = v6 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
