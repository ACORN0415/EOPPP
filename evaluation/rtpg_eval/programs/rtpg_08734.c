int test_func(void) {
    int v0 = 56;
    int v1 = 35;
    int v2 = 3;
    int v3 = 32;
    int v4 = 44;
    int i;
    v2 = 92;
    v0 = v0 * 6;
    v3 = v3 | v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
