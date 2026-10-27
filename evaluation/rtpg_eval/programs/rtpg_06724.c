int test_func(void) {
    int v0 = 83;
    int v1 = 48;
    int v2 = 55;
    int v3 = 84;
    int v4 = 61;
    int v5 = 75;
    int v6 = 19;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
