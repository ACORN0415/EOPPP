int test_func(void) {
    int v0 = 34;
    int v1 = 39;
    int v2 = 18;
    int i;
    v1 = 99;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
