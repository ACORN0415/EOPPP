int test_func(void) {
    int v0 = 1;
    int v1 = 55;
    int v2 = 93;
    int v3 = 28;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
