int test_func(void) {
    int v0 = 16;
    int v1 = 74;
    int v2 = 48;
    int v3 = 19;
    int i;
    v2 = 9;
    if (v0 > v3) { v0 = v3; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
