int test_func(void) {
    int v0 = 47;
    int v1 = 64;
    int v2 = 83;
    int v3 = 96;
    int v4 = 65;
    int v5 = 51;
    int i;
    v2 = v2 + v1;
    v2 = v2 * 5;
    v0 = 26;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
