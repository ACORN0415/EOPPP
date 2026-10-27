int test_func(void) {
    int v0 = 26;
    int v1 = 9;
    int v2 = 44;
    int v3 = 62;
    int v4 = 35;
    int v5 = 56;
    int v6 = 7;
    int v7 = 41;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
