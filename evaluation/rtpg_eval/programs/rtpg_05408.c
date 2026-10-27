int __arr_5408[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 14;
    int v2 = 29;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 6; i++) {
        v0 = v0 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_5408[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
