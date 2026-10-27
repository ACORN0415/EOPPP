int test_func(void) {
    int v0 = 79;
    int v1 = 80;
    int v2 = 9;
    int v3 = 0;
    int v4 = 83;
    int v5 = 23;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
