int test_func(void) {
    int v0 = 95;
    int v1 = 99;
    int v2 = 45;
    int v3 = 45;
    int v4 = 64;
    int v5 = 69;
    int v6 = 36;
    int v7 = 75;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
