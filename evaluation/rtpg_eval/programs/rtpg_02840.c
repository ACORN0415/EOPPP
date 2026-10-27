int test_func(void) {
    int v0 = 40;
    int v1 = 64;
    int v2 = 60;
    int v3 = 44;
    int v4 = 10;
    int i;
    v2 = v2 + v1;
    v0 = 49;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
