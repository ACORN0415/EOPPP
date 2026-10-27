int test_func(void) {
    int v0 = 51;
    int v1 = 92;
    int v2 = 3;
    int v3 = 52;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
