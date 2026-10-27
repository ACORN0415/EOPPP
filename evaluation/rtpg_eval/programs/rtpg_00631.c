int __arr_631[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 2;
    int v2 = 51;
    int v3 = 76;
    int v4 = 79;
    int v5 = 15;
    int v6 = 26;
    int v7 = 56;
    int i;
    for (i = 0; i < 10; i++) { __arr_631[i] = v3 + i; }
    v7 = 26;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
