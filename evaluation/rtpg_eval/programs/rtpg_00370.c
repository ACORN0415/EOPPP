int test_func(void) {
    int v0 = 20;
    int v1 = 79;
    int v2 = 68;
    int v3 = 1;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
