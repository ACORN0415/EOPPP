int test_func(void) {
    int v0 = 93;
    int v1 = 76;
    int v2 = 79;
    int i;
    v0 = v0 - v2;
    if (v1 > v2) { v1 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
