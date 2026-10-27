int __arr_257[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 8;
    int v2 = 97;
    int v3 = 55;
    int v4 = 21;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 10; i++) { __arr_257[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
