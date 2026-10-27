int test_func(void) {
    int v0 = 16;
    int v1 = 3;
    int v2 = 97;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 18; i++) {
        v2 = v2 + v1;
    }
    v0 = 22;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
