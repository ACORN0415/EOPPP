int test_func(void) {
    int v0 = 59;
    int v1 = 51;
    int v2 = 3;
    int v3 = 26;
    int v4 = 93;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
