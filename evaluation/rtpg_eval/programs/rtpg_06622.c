int test_func(void) {
    int v0 = 16;
    int v1 = 50;
    int v2 = 5;
    int v3 = 45;
    int v4 = 55;
    int i;
    v3 = v3 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
