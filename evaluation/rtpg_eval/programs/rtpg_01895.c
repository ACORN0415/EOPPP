int test_func(void) {
    int v0 = 53;
    int v1 = 63;
    int v2 = 65;
    int v3 = 48;
    int i;
    v2 = v2 * 8;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
