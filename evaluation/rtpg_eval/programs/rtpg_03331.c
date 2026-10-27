int __arr_3331[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 32;
    int v2 = 77;
    int v3 = 69;
    int v4 = 63;
    int v5 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_3331[i] = v1 + i; }
    v3 = v3 ^ v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
