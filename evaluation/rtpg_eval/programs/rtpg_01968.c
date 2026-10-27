int test_func(void) {
    int v0 = 16;
    int v1 = 32;
    int v2 = 68;
    int v3 = 59;
    int v4 = 41;
    int v5 = 38;
    int i;
    if (v0 > v5) { v0 = v5; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
