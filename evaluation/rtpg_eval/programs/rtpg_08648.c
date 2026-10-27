int test_func(void) {
    int v0 = 96;
    int v1 = 61;
    int v2 = 23;
    int v3 = 33;
    int v4 = 28;
    int v5 = 75;
    int v6 = 13;
    int v7 = 47;
    int i;
    v6 = v6 + v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
