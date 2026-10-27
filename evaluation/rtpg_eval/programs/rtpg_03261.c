int __arr_3261[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 36;
    int v2 = 46;
    int i;
    for (i = 0; i < 10; i++) { __arr_3261[i] = v0 + i; }
    v2 = 24;
    int *__p = &v2;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
