int test_func(void) {
    int v0 = 53;
    int v1 = 72;
    int v2 = 96;
    int v3 = 46;
    int i;
    v3 = v3 * 8;
    v1 = v1 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
