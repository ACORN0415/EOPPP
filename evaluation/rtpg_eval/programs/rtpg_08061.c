int test_func(void) {
    int v0 = 34;
    int v1 = 11;
    int v2 = 20;
    int v3 = 98;
    int i;
    v1 = v1 * 4;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
