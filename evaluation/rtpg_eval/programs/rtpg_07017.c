int test_func(void) {
    int v0 = 68;
    int v1 = 4;
    int v2 = 76;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v2;
    }
    v0 = v0 * 8;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v1 = v1 | v0;
    return v0;
}
int main(void) { return test_func(); }
