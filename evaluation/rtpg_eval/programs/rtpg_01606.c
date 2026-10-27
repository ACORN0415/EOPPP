int test_func(void) {
    int v0 = 7;
    int v1 = 7;
    int v2 = 68;
    int v3 = 88;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
