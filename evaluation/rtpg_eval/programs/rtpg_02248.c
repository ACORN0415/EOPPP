int test_func(void) {
    int v0 = 74;
    int v1 = 93;
    int v2 = 54;
    int i;
    v2 = 20;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 * 7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
