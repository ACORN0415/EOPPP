int test_func(void) {
    int v0 = 79;
    int v1 = 80;
    int v2 = 12;
    int v3 = 70;
    int v4 = 10;
    int v5 = 78;
    int i;
    v2 = 13;
    v4 = v4 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
