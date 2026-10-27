int test_func(void) {
    int v0 = 46;
    int v1 = 8;
    int v2 = 98;
    int v3 = 23;
    int v4 = 72;
    int v5 = 86;
    int i;
    v1 = v1 - v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
