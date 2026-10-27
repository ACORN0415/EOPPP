int test_func(void) {
    int v0 = 76;
    int v1 = 75;
    int v2 = 19;
    int v3 = 1;
    int v4 = 44;
    int v5 = 47;
    int v6 = 59;
    int v7 = 11;
    int i;
    v5 = v5 + v4;
    v1 = v1 / (v4 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
