int test_func(void) {
    int v0 = 90;
    int v1 = 42;
    int v2 = 3;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    if (v0 > v0) { v0 = v0; }
    v1 = v1 & v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
