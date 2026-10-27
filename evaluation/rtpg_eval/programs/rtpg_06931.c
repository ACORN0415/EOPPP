int test_func(void) {
    int v0 = 14;
    int v1 = 77;
    int v2 = 47;
    int v3 = 25;
    int v4 = 28;
    int v5 = 61;
    int v6 = 26;
    int v7 = 62;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v5 = v5 | v6;
    return v0;
}
int main(void) { return test_func(); }
