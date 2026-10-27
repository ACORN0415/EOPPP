int test_func(void) {
    int v0 = 11;
    int v1 = 23;
    int v2 = 92;
    int v3 = 32;
    int i;
    v1 = 53;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v2 = v2 ^ v3;
    return v0;
}
int main(void) { return test_func(); }
