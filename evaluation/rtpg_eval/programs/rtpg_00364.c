int __arr_364[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 72;
    int v2 = 31;
    int i;
    for (i = 0; i < 10; i++) { __arr_364[i] = v1 + i; }
    v1 = 0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v1 = v1 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
