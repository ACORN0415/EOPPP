int test_func(void) {
    int v0 = 17;
    int v1 = 25;
    int v2 = 73;
    int v3 = 98;
    int i;
    v3 = v3 * 4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v0 = v0 & v1;
    return v0;
}
int main(void) { return test_func(); }
