int test_func(void) {
    int v0 = 52;
    int v1 = 53;
    int v2 = 91;
    int v3 = 12;
    int v4 = 55;
    int i;
    if (v1 > v1) { v1 = v1; }
    v0 = v0 - v4;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
