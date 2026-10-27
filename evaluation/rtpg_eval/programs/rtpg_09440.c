int test_func(void) {
    int v0 = 94;
    int v1 = 12;
    int v2 = 2;
    int v3 = 79;
    int i;
    v3 = v3 * 2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
