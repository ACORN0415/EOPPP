int test_func(void) {
    int v0 = 50;
    int v1 = 85;
    int v2 = 69;
    int v3 = 19;
    int v4 = 62;
    int i;
    v3 = v3 * 4;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
