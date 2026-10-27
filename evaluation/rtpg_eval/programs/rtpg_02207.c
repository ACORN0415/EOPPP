int test_func(void) {
    int v0 = 24;
    int v1 = 75;
    int v2 = 51;
    int v3 = 98;
    int v4 = 41;
    int v5 = 91;
    int v6 = 67;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v2;
    }
    v3 = v3 * 7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
