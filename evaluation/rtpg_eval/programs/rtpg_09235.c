int test_func(void) {
    int v0 = 40;
    int v1 = 26;
    int v2 = 87;
    int v3 = 91;
    int v4 = 52;
    int i;
    v0 = v0 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
