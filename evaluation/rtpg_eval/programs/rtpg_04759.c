int __arr_4759[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 77;
    int v2 = 16;
    int i;
    v2 = v2 * 6;
    for (i = 0; i < 10; i++) { __arr_4759[i] = v0 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
