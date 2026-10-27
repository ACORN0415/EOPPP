int test_func(void) {
    int v0 = 60;
    int v1 = 99;
    int v2 = 38;
    int v3 = 78;
    int v4 = 54;
    int v5 = 12;
    int v6 = 25;
    int v7 = 0;
    int i;
    v4 = v4 - v7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
