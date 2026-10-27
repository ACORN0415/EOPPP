int test_func(void) {
    int v0 = 33;
    int v1 = 10;
    int v2 = 10;
    int v3 = 56;
    int v4 = 1;
    int v5 = 27;
    int i;
    v0 = v0 - v4;
    v5 = v5 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
