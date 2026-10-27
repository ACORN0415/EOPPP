int __arr_2808[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 77;
    int v2 = 55;
    int v3 = 51;
    int v4 = 31;
    int v5 = 25;
    int i;
    for (i = 0; i < 10; i++) { __arr_2808[i] = v5 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
