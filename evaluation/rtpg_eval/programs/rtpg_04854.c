int test_func(void) {
    int v0 = 5;
    int v1 = 69;
    int v2 = 12;
    int v3 = 51;
    int i;
    if (v3 > v2) { v3 = v2; }
    v1 = 88;
    v1 = v1 * 3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
