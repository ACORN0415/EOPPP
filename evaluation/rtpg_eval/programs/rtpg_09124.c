int __arr_9124[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 28;
    int v2 = 66;
    int v3 = 50;
    int v4 = 4;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 10; i++) { __arr_9124[i] = v0 + i; }
    for (i = 0; i < 11; i++) {
        v4 = v4 + v1;
    }
    v4 = v4 % (v0 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
