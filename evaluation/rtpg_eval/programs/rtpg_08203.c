int test_func(void) {
    int v0 = 46;
    int v1 = 54;
    int v2 = 21;
    int v3 = 12;
    int v4 = 60;
    int v5 = 83;
    int v6 = 55;
    int i;
    v5 = 95;
    v5 = v5 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
