int __arr_4588[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 48;
    int v2 = 44;
    int v3 = 57;
    int i;
    for (i = 0; i < 10; i++) { __arr_4588[i] = v3 + i; }
    if (v3 > v2) { v3 = v2; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
