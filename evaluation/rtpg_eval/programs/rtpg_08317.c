int test_func(void) {
    int v0 = 14;
    int v1 = 98;
    int v2 = 99;
    int v3 = 71;
    int i;
    v0 = 49;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
