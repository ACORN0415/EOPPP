int __arr_2264[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 42;
    int v2 = 45;
    int v3 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_2264[i] = v1 + i; }
    v1 = v1 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
