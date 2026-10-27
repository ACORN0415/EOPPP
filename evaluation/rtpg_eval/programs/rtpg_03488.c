int __arr_3488[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 16;
    int v2 = 79;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_3488[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
