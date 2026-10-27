int test_func(void) {
    int v0 = 12;
    int v1 = 57;
    int v2 = 37;
    int v3 = 84;
    int v4 = 22;
    int v5 = 40;
    int v6 = 8;
    int i;
    v4 = 90;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
