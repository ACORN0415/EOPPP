int test_func(void) {
    int v0 = 85;
    int v1 = 97;
    int v2 = 24;
    int v3 = 96;
    int v4 = 44;
    int v5 = 94;
    int v6 = 11;
    int v7 = 81;
    int i;
    v7 = v7 - v3;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v4;
    }
    if (v5 > v7) { v5 = v7; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
