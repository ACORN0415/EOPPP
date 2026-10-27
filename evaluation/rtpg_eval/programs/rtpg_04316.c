int test_func(void) {
    int v0 = 80;
    int v1 = 52;
    int v2 = 48;
    int v3 = 86;
    int i;
    if (v1 > v3) { v1 = v3; }
    v0 = v0 | v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
