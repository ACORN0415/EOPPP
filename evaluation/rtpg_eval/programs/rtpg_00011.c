int test_func(void) {
    int v0 = 25;
    int v1 = 24;
    int v2 = 80;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v1;
    }
    v1 = v1 - v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
