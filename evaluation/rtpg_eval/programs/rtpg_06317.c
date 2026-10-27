int test_func(void) {
    int v0 = 59;
    int v1 = 8;
    int v2 = 54;
    int v3 = 49;
    int v4 = 80;
    int i;
    v4 = v4 - v1;
    v0 = v0 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
