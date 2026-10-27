int test_func(void) {
    int v0 = 56;
    int v1 = 61;
    int v2 = 1;
    int v3 = 86;
    int i;
    v2 = v2 - v1;
    v0 = 29;
    if (v1 > v0) { v1 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
