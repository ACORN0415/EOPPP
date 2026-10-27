int test_func(void) {
    int v0 = 33;
    int v1 = 94;
    int v2 = 28;
    int v3 = 29;
    int v4 = 93;
    int v5 = 36;
    int v6 = 27;
    int i;
    for (i = 0; i < 20; i++) {
        v6 = v6 + v6;
    }
    v2 = v2 * 6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
