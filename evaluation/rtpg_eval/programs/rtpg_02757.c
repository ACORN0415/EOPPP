int test_func(void) {
    int v0 = 70;
    int v1 = 1;
    int v2 = 45;
    int i;
    v0 = v0 - v2;
    v0 = v0 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
