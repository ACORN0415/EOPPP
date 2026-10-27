int test_func(void) {
    int v0 = 38;
    int v1 = 19;
    int v2 = 35;
    int v3 = 11;
    int v4 = 72;
    int v5 = 55;
    int v6 = 11;
    int i;
    if (v0 > v4) { v0 = v4; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
