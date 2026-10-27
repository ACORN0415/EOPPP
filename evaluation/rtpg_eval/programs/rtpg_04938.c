int __arr_4938[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 57;
    int v2 = 23;
    int v3 = 52;
    int v4 = 85;
    int v5 = 0;
    int v6 = 17;
    int v7 = 74;
    int i;
    for (i = 0; i < 10; i++) { __arr_4938[i] = v5 + i; }
    v1 = v1 * 5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
