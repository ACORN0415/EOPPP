int test_func(void) {
    int v0 = 6;
    int v1 = 76;
    int v2 = 64;
    int v3 = 43;
    int v4 = 56;
    int v5 = 99;
    int v6 = 80;
    int i;
    if (v3 > v4) { v3 = v4; }
    v2 = 44;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
