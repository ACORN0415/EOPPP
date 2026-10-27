int test_func(void) {
    int v0 = 33;
    int v1 = 32;
    int v2 = 55;
    int v3 = 93;
    int v4 = 84;
    int v5 = 47;
    int v6 = 67;
    int v7 = 1;
    int i;
    v5 = 75;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
