int test_func(void) {
    int v0 = 52;
    int v1 = 58;
    int v2 = 80;
    int v3 = 86;
    int v4 = 39;
    int i;
    v1 = 22;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
