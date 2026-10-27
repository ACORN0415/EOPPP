int test_func(void) {
    int v0 = 84;
    int v1 = 25;
    int v2 = 30;
    int v3 = 75;
    int v4 = 11;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v4;
    }
    v1 = 32;
    v1 = v1 - v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
