int __arr_6164[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 46;
    int v2 = 62;
    int i;
    for (i = 0; i < 10; i++) { __arr_6164[i] = v0 + i; }
    v2 = 53;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v1 = v1 & v0;
    return v0;
}
int main(void) { return test_func(); }
