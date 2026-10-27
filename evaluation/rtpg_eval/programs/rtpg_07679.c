int test_func(void) {
    int v0 = 48;
    int v1 = 93;
    int v2 = 46;
    int v3 = 7;
    int v4 = 37;
    int v5 = 96;
    int v6 = 11;
    int i;
    v1 = v1 + v1;
    v1 = v1 * 7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
