int __arr_1709[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 100;
    int v2 = 98;
    int v3 = 71;
    int v4 = 11;
    int v5 = 23;
    int v6 = 97;
    int i;
    v1 = 64;
    for (i = 0; i < 10; i++) { __arr_1709[i] = v0 + i; }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
