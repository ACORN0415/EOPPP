int test_func(void) {
    int v0 = 1;
    int v1 = 25;
    int v2 = 87;
    int v3 = 3;
    int i;
    v2 = v2 - v0;
    v0 = 53;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
