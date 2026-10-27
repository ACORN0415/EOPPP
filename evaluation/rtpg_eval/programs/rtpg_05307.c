int test_func(void) {
    int v0 = 99;
    int v1 = 92;
    int v2 = 8;
    int v3 = 6;
    int i;
    if (v3 > v0) { v3 = v0; }
    v2 = v2 * 3;
    v1 = 81;
    v3 = v3 ^ v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
