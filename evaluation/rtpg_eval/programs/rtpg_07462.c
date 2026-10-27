int test_func(void) {
    int v0 = 9;
    int v1 = 16;
    int v2 = 54;
    int v3 = 10;
    int v4 = 70;
    int v5 = 67;
    int v6 = 69;
    int v7 = 27;
    int i;
    v1 = v1 + v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
