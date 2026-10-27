int test_func(void) {
    int v0 = 77;
    int v1 = 38;
    int v2 = 78;
    int v3 = 40;
    int v4 = 91;
    int v5 = 79;
    int v6 = 69;
    int i;
    v3 = 90;
    v0 = v0 + v2;
    v0 = v0 | v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
