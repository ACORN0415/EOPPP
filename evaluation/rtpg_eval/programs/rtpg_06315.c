int __arr_6315[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 23;
    int v2 = 11;
    int v3 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_6315[i] = v3 + i; }
    for (i = 0; i < 20; i++) {
        v2 = v2 + v1;
    }
    v3 = v3 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v0 = v0 & v2;
    return v0;
}
int main(void) { return test_func(); }
