int __arr_8101[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 62;
    int v2 = 18;
    int v3 = 16;
    int i;
    v0 = v0 - v3;
    v0 = 96;
    for (i = 0; i < 10; i++) { __arr_8101[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
