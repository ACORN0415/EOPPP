int __arr_2083[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 6;
    int v2 = 32;
    int v3 = 28;
    int i;
    for (i = 0; i < 10; i++) { __arr_2083[i] = v1 + i; }
    if (v0 > v2) { v0 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
