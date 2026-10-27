int test_func(void) {
    int v0 = 32;
    int v1 = 30;
    int v2 = 72;
    int v3 = 44;
    int i;
    v0 = 17;
    v3 = v3 * 9;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
