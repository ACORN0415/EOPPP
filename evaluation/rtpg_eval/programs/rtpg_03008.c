int test_func(void) {
    int v0 = 56;
    int v1 = 1;
    int v2 = 35;
    int v3 = 93;
    int i;
    v2 = v2 - v1;
    v3 = v3 & v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
