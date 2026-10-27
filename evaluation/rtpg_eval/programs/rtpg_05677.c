int test_func(void) {
    int v0 = 58;
    int v1 = 47;
    int v2 = 8;
    int v3 = 57;
    int v4 = 75;
    int v5 = 5;
    int v6 = 3;
    int i;
    v6 = 80;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
