int test_func(void) {
    int v0 = 40;
    int v1 = 36;
    int v2 = 60;
    int v3 = 53;
    int v4 = 82;
    int v5 = 61;
    int v6 = 9;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
