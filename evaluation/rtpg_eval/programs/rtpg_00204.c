int test_func(void) {
    int v0 = 81;
    int v1 = 71;
    int v2 = 27;
    int v3 = 69;
    int v4 = 25;
    int i;
    v3 = 94;
    v2 = v2 + v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
