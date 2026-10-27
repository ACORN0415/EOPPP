int test_func(void) {
    int v0 = 38;
    int v1 = 57;
    int v2 = 6;
    int v3 = 30;
    int v4 = 67;
    int i;
    v4 = v4 * 3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
