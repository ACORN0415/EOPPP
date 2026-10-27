int test_func(void) {
    int v0 = 86;
    int v1 = 38;
    int v2 = 94;
    int v3 = 84;
    int v4 = 35;
    int v5 = 100;
    int v6 = 59;
    int v7 = 64;
    int i;
    v3 = v3 * 2;
    v1 = 68;
    v6 = v6 ^ v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
