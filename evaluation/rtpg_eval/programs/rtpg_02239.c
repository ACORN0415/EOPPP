int test_func(void) {
    int v0 = 76;
    int v1 = 53;
    int v2 = 98;
    int v3 = 1;
    int v4 = 36;
    int v5 = 11;
    int v6 = 73;
    int i;
    v4 = 10;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
