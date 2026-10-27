int test_func(void) {
    int v0 = 23;
    int v1 = 43;
    int v2 = 65;
    int v3 = 76;
    int v4 = 99;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
