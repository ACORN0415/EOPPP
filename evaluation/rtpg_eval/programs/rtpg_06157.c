int __arr_6157[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 19;
    int v2 = 76;
    int v3 = 17;
    int v4 = 10;
    int i;
    v2 = 59;
    for (i = 0; i < 10; i++) { __arr_6157[i] = v0 + i; }
    v4 = v4 - v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
