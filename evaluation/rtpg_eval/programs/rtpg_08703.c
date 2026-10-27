int __arr_8703[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 67;
    int v2 = 58;
    int v3 = 94;
    int v4 = 56;
    int v5 = 70;
    int v6 = 52;
    int v7 = 34;
    int i;
    for (i = 0; i < 10; i++) { __arr_8703[i] = v7 + i; }
    v0 = v0 + v1;
    v2 = 83;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
