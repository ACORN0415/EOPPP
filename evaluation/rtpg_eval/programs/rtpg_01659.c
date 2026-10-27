int test_func(void) {
    int v0 = 26;
    int v1 = 14;
    int v2 = 75;
    int v3 = 46;
    int v4 = 94;
    int i;
    v1 = 89;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
