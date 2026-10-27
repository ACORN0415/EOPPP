int __arr_8968[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 100;
    int v2 = 64;
    int v3 = 64;
    int v4 = 94;
    int v5 = 21;
    int v6 = 76;
    int v7 = 46;
    int i;
    v4 = v4 * 9;
    for (i = 0; i < 10; i++) { __arr_8968[i] = v2 + i; }
    for (i = 0; i < 5; i++) {
        v1 = v1 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
