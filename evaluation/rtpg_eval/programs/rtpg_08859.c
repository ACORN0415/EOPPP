int test_func(void) {
    int v0 = 35;
    int v1 = 56;
    int v2 = 66;
    int v3 = 53;
    int v4 = 48;
    int i;
    if (v2 > v3) { v2 = v3; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
