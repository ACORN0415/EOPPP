int __arr_2582[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 25;
    int v2 = 21;
    int v3 = 15;
    int v4 = 43;
    int v5 = 85;
    int v6 = 89;
    int v7 = 54;
    int i;
    for (i = 0; i < 10; i++) { __arr_2582[i] = v1 + i; }
    v7 = 66;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
