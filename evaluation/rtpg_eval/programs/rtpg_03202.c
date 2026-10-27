int __arr_3202[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 88;
    int v2 = 80;
    int v3 = 58;
    int v4 = 61;
    int v5 = 89;
    int v6 = 62;
    int i;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_3202[i] = v3 + i; }
    v6 = v6 - v5;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    v4 = v4 | v3;
    return v0;
}
int main(void) { return test_func(); }
