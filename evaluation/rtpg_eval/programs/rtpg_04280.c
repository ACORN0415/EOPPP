int test_func(void) {
    int v0 = 47;
    int v1 = 21;
    int v2 = 17;
    int v3 = 67;
    int v4 = 72;
    int v5 = 2;
    int v6 = 49;
    int i;
    v1 = v1 * 3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
