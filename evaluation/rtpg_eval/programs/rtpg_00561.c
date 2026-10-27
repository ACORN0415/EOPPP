int test_func(void) {
    int v0 = 99;
    int v1 = 55;
    int v2 = 84;
    int v3 = 59;
    int v4 = 73;
    int v5 = 12;
    int i;
    v2 = v2 * 3;
    v4 = v4 - v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
