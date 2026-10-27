int test_func(void) {
    int v0 = 7;
    int v1 = 80;
    int v2 = 3;
    int v3 = 49;
    int v4 = 81;
    int v5 = 6;
    int v6 = 49;
    int v7 = 67;
    int i;
    v1 = v1 * 3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
