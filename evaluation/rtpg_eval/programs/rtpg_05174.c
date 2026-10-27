int test_func(void) {
    int v0 = 52;
    int v1 = 18;
    int v2 = 19;
    int v3 = 7;
    int v4 = 88;
    int v5 = 82;
    int i;
    v3 = v3 + v2;
    v3 = v3 - v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
