int test_func(void) {
    int v0 = 86;
    int v1 = 50;
    int v2 = 91;
    int v3 = 12;
    int v4 = 33;
    int v5 = 54;
    int i;
    v1 = v1 - v5;
    v5 = v5 + v3;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
