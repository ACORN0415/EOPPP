int test_func(void) {
    int v0 = 86;
    int v1 = 15;
    int v2 = 39;
    int v3 = 40;
    int v4 = 8;
    int v5 = 50;
    int i;
    v3 = v3 * 8;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
