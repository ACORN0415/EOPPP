int test_func(void) {
    int v0 = 100;
    int v1 = 60;
    int v2 = 42;
    int v3 = 57;
    int i;
    v0 = v0 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
