int __arr_2725[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 15;
    int v2 = 88;
    int v3 = 68;
    int v4 = 74;
    int v5 = 47;
    int i;
    for (i = 0; i < 10; i++) { __arr_2725[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
