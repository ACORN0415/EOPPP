int test_func(void) {
    int v0 = 97;
    int v1 = 44;
    int v2 = 26;
    int v3 = 65;
    int v4 = 60;
    int v5 = 62;
    int v6 = 46;
    int i;
    v2 = v2 - v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
