int test_func(void) {
    int v0 = 87;
    int v1 = 13;
    int v2 = 13;
    int v3 = 1;
    int v4 = 48;
    int v5 = 70;
    int v6 = 7;
    int v7 = 26;
    int i;
    v7 = v7 - v4;
    v5 = v5 + v7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
