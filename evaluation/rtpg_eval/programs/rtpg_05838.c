int test_func(void) {
    int v0 = 26;
    int v1 = 42;
    int v2 = 84;
    int v3 = 31;
    int v4 = 40;
    int v5 = 80;
    int v6 = 44;
    int v7 = 6;
    int i;
    v2 = v2 - v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
