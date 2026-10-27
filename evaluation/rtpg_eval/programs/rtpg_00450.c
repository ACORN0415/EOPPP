int __arr_450[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 92;
    int v2 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_450[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
