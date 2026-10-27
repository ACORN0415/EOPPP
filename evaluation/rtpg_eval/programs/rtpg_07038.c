int test_func(void) {
    int v0 = 47;
    int v1 = 19;
    int v2 = 21;
    int i;
    v0 = v0 * 8;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
