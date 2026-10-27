int __arr_2021[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 35;
    int v2 = 72;
    int v3 = 90;
    int v4 = 88;
    int v5 = 100;
    int v6 = 96;
    int v7 = 55;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v7;
    }
    for (i = 0; i < 10; i++) { __arr_2021[i] = v6 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
