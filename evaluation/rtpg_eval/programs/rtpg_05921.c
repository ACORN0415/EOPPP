int test_func(void) {
    int v0 = 73;
    int v1 = 40;
    int v2 = 23;
    int i;
    v2 = v2 - v0;
    v1 = v1 & v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
