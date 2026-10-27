int test_func(void) {
    int v0 = 96;
    int v1 = 11;
    int v2 = 42;
    int v3 = 1;
    int v4 = 83;
    int v5 = 88;
    int i;
    v5 = 19;
    for (i = 0; i < 14; i++) {
        v4 = v4 + v1;
    }
    v3 = v3 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
