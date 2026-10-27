int test_func(void) {
    int v0 = 72;
    int v1 = 94;
    int v2 = 73;
    int v3 = 90;
    int v4 = 93;
    int v5 = 88;
    int v6 = 18;
    int i;
    v5 = v5 - v3;
    v5 = 17;
    v3 = v3 * 10;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
