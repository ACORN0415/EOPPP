int test_func(void) {
    int v0 = 8;
    int v1 = 91;
    int v2 = 72;
    int i;
    v2 = v2 + v1;
    v1 = v1 * 2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
