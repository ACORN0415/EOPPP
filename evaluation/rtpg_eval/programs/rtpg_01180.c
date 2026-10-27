int test_func(void) {
    int v0 = 65;
    int v1 = 85;
    int v2 = 68;
    int v3 = 53;
    int i;
    v1 = v1 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
