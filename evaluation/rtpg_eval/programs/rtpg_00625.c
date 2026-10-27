int test_func(void) {
    int v0 = 91;
    int v1 = 80;
    int v2 = 18;
    int v3 = 32;
    int v4 = 27;
    int v5 = 49;
    int i;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v5;
    }
    v2 = v2 - v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
