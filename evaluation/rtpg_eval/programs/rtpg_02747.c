int test_func(void) {
    int v0 = 38;
    int v1 = 65;
    int v2 = 90;
    int v3 = 25;
    int v4 = 52;
    int v5 = 10;
    int i;
    v2 = v2 - v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
