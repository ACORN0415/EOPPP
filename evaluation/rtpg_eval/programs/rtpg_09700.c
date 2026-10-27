int test_func(void) {
    int v0 = 78;
    int v1 = 35;
    int v2 = 73;
    int v3 = 6;
    int v4 = 27;
    int v5 = 16;
    int v6 = 10;
    int v7 = 96;
    int i;
    v7 = 76;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
