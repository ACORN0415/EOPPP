int __arr_3985[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 81;
    int v2 = 90;
    int i;
    for (i = 0; i < 10; i++) { __arr_3985[i] = v0 + i; }
    if (v2 > v0) { v2 = v0; }
    v1 = v1 * 3;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
