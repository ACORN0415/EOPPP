int test_func(void) {
    int v0 = 80;
    int v1 = 42;
    int v2 = 100;
    int v3 = 61;
    int v4 = 93;
    int v5 = 100;
    int v6 = 85;
    int v7 = 91;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v1;
    }
    v2 = v2 % (v6 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
