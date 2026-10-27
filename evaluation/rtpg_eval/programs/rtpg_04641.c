int test_func(void) {
    int v0 = 8;
    int v1 = 1;
    int v2 = 12;
    int v3 = 67;
    int v4 = 11;
    int v5 = 79;
    int i;
    v1 = v1 - v4;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v1;
    }
    v1 = v1 / (v2 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
