int test_func(void) {
    int v0 = 16;
    int v1 = 54;
    int v2 = 62;
    int v3 = 4;
    int v4 = 32;
    int v5 = 52;
    int v6 = 38;
    int i;
    if (v6 > v2) { v6 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v3 = v3 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
