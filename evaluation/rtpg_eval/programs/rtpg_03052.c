int test_func(void) {
    int v0 = 33;
    int v1 = 16;
    int v2 = 72;
    int v3 = 72;
    int i;
    v1 = v1 + v2;
    if (v0 > v3) { v0 = v3; }
    v3 = 45;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
