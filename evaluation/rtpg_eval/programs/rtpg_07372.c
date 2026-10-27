int test_func(void) {
    int v0 = 78;
    int v1 = 27;
    int v2 = 8;
    int i;
    v1 = v1 + v2;
    if (v0 > v0) { v0 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
