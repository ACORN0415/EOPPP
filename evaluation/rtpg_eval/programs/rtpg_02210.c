int test_func(void) {
    int v0 = 74;
    int v1 = 36;
    int v2 = 83;
    int v3 = 40;
    int v4 = 71;
    int v5 = 26;
    int v6 = 95;
    int v7 = 14;
    int i;
    v0 = v0 - v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
