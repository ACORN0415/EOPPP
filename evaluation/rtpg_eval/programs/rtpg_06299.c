int __arr_6299[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 8;
    int v2 = 82;
    int v3 = 6;
    int v4 = 50;
    int v5 = 69;
    int v6 = 59;
    int v7 = 35;
    int i;
    v6 = v6 + v5;
    for (i = 0; i < 10; i++) { __arr_6299[i] = v4 + i; }
    for (i = 0; i < 9; i++) {
        v7 = v7 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
