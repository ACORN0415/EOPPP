int test_func(void) {
    int v0 = 41;
    int v1 = 70;
    int v2 = 13;
    int v3 = 71;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v2;
    }
    v2 = 100;
    v2 = v2 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
