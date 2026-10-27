int test_func(void) {
    int v0 = 84;
    int v1 = 81;
    int v2 = 70;
    int v3 = 61;
    int i;
    v3 = 33;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
