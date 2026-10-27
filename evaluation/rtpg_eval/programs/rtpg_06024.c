int test_func(void) {
    int v0 = 62;
    int v1 = 12;
    int v2 = 6;
    int v3 = 20;
    int v4 = 61;
    int v5 = 59;
    int v6 = 64;
    int i;
    v1 = 82;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
