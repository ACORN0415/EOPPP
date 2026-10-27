int __arr_5453[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 36;
    int v2 = 25;
    int i;
    for (i = 0; i < 10; i++) { __arr_5453[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
