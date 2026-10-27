int __arr_6368[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 62;
    int v2 = 98;
    int v3 = 71;
    int v4 = 53;
    int v5 = 57;
    int i;
    if (v4 > v2) { v4 = v2; }
    for (i = 0; i < 10; i++) { __arr_6368[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
