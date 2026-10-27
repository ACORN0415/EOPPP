int __arr_3872[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 92;
    int v2 = 50;
    int v3 = 59;
    int v4 = 92;
    int v5 = 90;
    int v6 = 8;
    int v7 = 69;
    int i;
    for (i = 0; i < 10; i++) { __arr_3872[i] = v7 + i; }
    if (v1 > v3) { v1 = v3; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    v6 = v6 & v4;
    return v0;
}
int main(void) { return test_func(); }
