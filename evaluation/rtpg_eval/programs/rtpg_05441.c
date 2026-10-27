int test_func(void) {
    int v0 = 3;
    int v1 = 37;
    int v2 = 25;
    int i;
    v1 = 46;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
