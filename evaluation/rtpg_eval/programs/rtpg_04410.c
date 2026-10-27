int test_func(void) {
    int v0 = 53;
    int v1 = 55;
    int v2 = 5;
    int i;
    v0 = 80;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
