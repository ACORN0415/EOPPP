int __arr_8216[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 51;
    int v2 = 12;
    int v3 = 88;
    int v4 = 19;
    int i;
    v4 = v4 - v2;
    for (i = 0; i < 10; i++) { __arr_8216[i] = v2 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
