int test_func(void) {
    int v0 = 55;
    int v1 = 43;
    int v2 = 64;
    int v3 = 92;
    int v4 = 8;
    int i;
    v2 = 63;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
