int test_func(void) {
    int v0 = 15;
    int v1 = 97;
    int v2 = 67;
    int v3 = 41;
    int v4 = 44;
    int v5 = 9;
    int v6 = 46;
    int v7 = 13;
    int i;
    if (v0 > v6) { v0 = v6; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
