int test_func(void) {
    int v0 = 88;
    int v1 = 84;
    int v2 = 0;
    int v3 = 86;
    int v4 = 68;
    int v5 = 35;
    int i;
    v4 = v4 * 7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
