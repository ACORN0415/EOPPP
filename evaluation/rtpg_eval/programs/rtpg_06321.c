int test_func(void) {
    int v0 = 96;
    int v1 = 23;
    int v2 = 53;
    int v3 = 10;
    int v4 = 40;
    int v5 = 72;
    int v6 = 7;
    int v7 = 17;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v6;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
