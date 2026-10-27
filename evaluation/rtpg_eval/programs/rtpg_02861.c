int test_func(void) {
    int v0 = 32;
    int v1 = 66;
    int v2 = 13;
    int v3 = 27;
    int v4 = 4;
    int v5 = 25;
    int i;
    v1 = v1 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
