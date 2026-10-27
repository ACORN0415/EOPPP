int test_func(void) {
    int v0 = 65;
    int v1 = 82;
    int v2 = 34;
    int v3 = 55;
    int v4 = 1;
    int v5 = 59;
    int v6 = 7;
    int v7 = 96;
    int i;
    v3 = v3 - v2;
    v0 = 8;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
