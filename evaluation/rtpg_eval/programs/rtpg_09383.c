int test_func(void) {
    int v0 = 67;
    int v1 = 64;
    int v2 = 67;
    int i;
    v0 = v0 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
