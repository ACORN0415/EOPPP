int __arr_9004[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 14;
    int v2 = 29;
    int v3 = 51;
    int v4 = 92;
    int v5 = 9;
    int v6 = 97;
    int i;
    for (i = 0; i < 10; i++) { __arr_9004[i] = v1 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v3 = v3 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
