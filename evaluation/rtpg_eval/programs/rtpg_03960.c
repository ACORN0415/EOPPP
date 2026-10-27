int __arr_3960[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 46;
    int v2 = 87;
    int v3 = 21;
    int v4 = 17;
    int v5 = 18;
    int v6 = 59;
    int v7 = 15;
    int i;
    for (i = 0; i < 10; i++) { __arr_3960[i] = v6 + i; }
    for (i = 0; i < 11; i++) {
        v1 = v1 + v4;
    }
    v3 = v3 - v5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
