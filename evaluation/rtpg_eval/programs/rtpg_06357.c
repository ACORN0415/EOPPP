int __arr_6357[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 69;
    int v2 = 20;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) { __arr_6357[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
