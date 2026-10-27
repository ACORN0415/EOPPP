int test_func(void) {
    int v0 = 31;
    int v1 = 12;
    int v2 = 47;
    int v3 = 91;
    int v4 = 41;
    int v5 = 64;
    int i;
    if (v5 > v0) { v5 = v0; }
    for (i = 0; i < 13; i++) {
        v5 = v5 + v0;
    }
    v2 = 42;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
