int test_func(void) {
    int v0 = 55;
    int v1 = 25;
    int v2 = 5;
    int v3 = 55;
    int i;
    if (v3 > v0) { v3 = v0; }
    v0 = v0 + v0;
    v2 = 76;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
