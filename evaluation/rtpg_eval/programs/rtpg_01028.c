int test_func(void) {
    int v0 = 93;
    int v1 = 56;
    int v2 = 86;
    int v3 = 2;
    int i;
    if (v1 > v0) { v1 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
