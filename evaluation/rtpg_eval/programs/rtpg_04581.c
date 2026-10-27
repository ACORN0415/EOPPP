int __arr_4581[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 78;
    int v2 = 9;
    int v3 = 43;
    int v4 = 19;
    int i;
    for (i = 0; i < 10; i++) { __arr_4581[i] = v1 + i; }
    v3 = 21;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
