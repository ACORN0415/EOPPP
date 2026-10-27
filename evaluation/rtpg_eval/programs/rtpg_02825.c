int test_func(void) {
    int v0 = 16;
    int v1 = 16;
    int v2 = 57;
    int v3 = 64;
    int v4 = 46;
    int v5 = 15;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 - v1;
    v5 = v5 & v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
