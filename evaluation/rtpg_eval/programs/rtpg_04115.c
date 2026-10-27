int __arr_4115[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 53;
    int v2 = 1;
    int v3 = 47;
    int i;
    for (i = 0; i < 10; i++) { __arr_4115[i] = v2 + i; }
    v0 = v0 + v2;
    v0 = v0 * 5;
    int *__p = &v2;
    *__p = *__p + 1;
    v0 = v0 / (v1 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
