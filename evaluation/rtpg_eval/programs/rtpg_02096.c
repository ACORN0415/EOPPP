int __arr_2096[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 98;
    int v2 = 96;
    int v3 = 88;
    int v4 = 6;
    int i;
    v2 = v2 * 10;
    for (i = 0; i < 10; i++) { __arr_2096[i] = v3 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
