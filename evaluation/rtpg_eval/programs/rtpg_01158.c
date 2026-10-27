int test_func(void) {
    int v0 = 64;
    int v1 = 33;
    int v2 = 92;
    int v3 = 5;
    int v4 = 99;
    int i;
    v2 = v2 + v1;
    v4 = 80;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v1 = v1 ^ v0;
    return v0;
}
int main(void) { return test_func(); }
