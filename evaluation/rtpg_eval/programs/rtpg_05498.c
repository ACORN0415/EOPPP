int test_func(void) {
    int v0 = 21;
    int v1 = 57;
    int v2 = 32;
    int v3 = 59;
    int v4 = 72;
    int v5 = 54;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v5;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
