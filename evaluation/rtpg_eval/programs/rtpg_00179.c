int test_func(void) {
    int v0 = 6;
    int v1 = 88;
    int v2 = 35;
    int v3 = 19;
    int v4 = 35;
    int v5 = 50;
    int i;
    v1 = v1 * 5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
