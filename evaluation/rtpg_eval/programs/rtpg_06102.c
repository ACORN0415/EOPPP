int test_func(void) {
    int v0 = 4;
    int v1 = 46;
    int v2 = 30;
    int v3 = 6;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v2;
    }
    v1 = v1 - v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
