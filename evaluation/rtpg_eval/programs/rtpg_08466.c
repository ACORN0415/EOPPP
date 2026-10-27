int test_func(void) {
    int v0 = 88;
    int v1 = 21;
    int v2 = 45;
    int v3 = 44;
    int v4 = 30;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v4;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
