int __arr_9024[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 33;
    int v2 = 86;
    int v3 = 10;
    int v4 = 32;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_9024[i] = v0 + i; }
    v2 = v2 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
