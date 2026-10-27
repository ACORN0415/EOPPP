int test_func(void) {
    int v0 = 8;
    int v1 = 75;
    int v2 = 30;
    int v3 = 43;
    int v4 = 35;
    int v5 = 86;
    int v6 = 64;
    int v7 = 83;
    int i;
    v2 = v2 + v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
