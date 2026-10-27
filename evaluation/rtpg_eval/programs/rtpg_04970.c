int __arr_4970[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 33;
    int v2 = 68;
    int i;
    if (v0 > v1) { v0 = v1; }
    for (i = 0; i < 10; i++) { __arr_4970[i] = v2 + i; }
    v0 = v0 * 2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v0 = v0 % (v2 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
