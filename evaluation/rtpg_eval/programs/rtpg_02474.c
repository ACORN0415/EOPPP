int test_func(void) {
    int v0 = 34;
    int v1 = 45;
    int v2 = 62;
    int v3 = 64;
    int v4 = 2;
    int i;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v3;
    }
    v3 = v3 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
