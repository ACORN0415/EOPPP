int test_func(void) {
    int v0 = 92;
    int v1 = 61;
    int v2 = 66;
    int v3 = 27;
    int v4 = 99;
    int v5 = 12;
    int v6 = 8;
    int i;
    for (i = 0; i < 6; i++) {
        v6 = v6 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
