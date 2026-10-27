int test_func(void) {
    int v0 = 43;
    int v1 = 78;
    int v2 = 25;
    int v3 = 81;
    int v4 = 67;
    int v5 = 12;
    int v6 = 3;
    int i;
    v5 = v5 - v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
