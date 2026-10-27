int test_func(void) {
    int v0 = 66;
    int v1 = 17;
    int v2 = 78;
    int i;
    if (v0 > v1) { v0 = v1; }
    v1 = v1 - v0;
    v0 = v0 + v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v0 = v0 & v1;
    return v0;
}
int main(void) { return test_func(); }
