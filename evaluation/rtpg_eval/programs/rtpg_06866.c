int __arr_6866[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 71;
    int v2 = 86;
    int v3 = 34;
    int i;
    for (i = 0; i < 10; i++) { __arr_6866[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
