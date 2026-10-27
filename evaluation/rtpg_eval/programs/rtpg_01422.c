int test_func(void) {
    int v0 = 71;
    int v1 = 11;
    int v2 = 58;
    int v3 = 59;
    int v4 = 89;
    int v5 = 62;
    int v6 = 38;
    int v7 = 96;
    int i;
    v5 = v5 - v3;
    v2 = v2 * 4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
