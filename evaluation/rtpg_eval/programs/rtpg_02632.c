int test_func(void) {
    int v0 = 54;
    int v1 = 58;
    int v2 = 76;
    int v3 = 96;
    int v4 = 58;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
