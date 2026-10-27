int __arr_9951[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 94;
    int v2 = 48;
    int v3 = 46;
    int v4 = 70;
    int v5 = 35;
    int v6 = 25;
    int v7 = 51;
    int i;
    for (i = 0; i < 10; i++) { __arr_9951[i] = v5 + i; }
    for (i = 0; i < 10; i++) {
        v5 = v5 + v5;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
