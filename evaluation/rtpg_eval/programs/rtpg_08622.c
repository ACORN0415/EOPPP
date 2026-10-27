int test_func(void) {
    int v0 = 6;
    int v1 = 29;
    int v2 = 13;
    int v3 = 64;
    int v4 = 3;
    int v5 = 94;
    int v6 = 11;
    int v7 = 92;
    int i;
    if (v5 > v1) { v5 = v1; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
