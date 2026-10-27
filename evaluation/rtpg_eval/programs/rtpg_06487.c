int test_func(void) {
    int v0 = 2;
    int v1 = 81;
    int v2 = 10;
    int v3 = 91;
    int i;
    v1 = v1 + v2;
    if (v2 > v0) { v2 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v1 = v1 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
