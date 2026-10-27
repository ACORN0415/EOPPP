int test_func(void) {
    int v0 = 29;
    int v1 = 12;
    int v2 = 51;
    int v3 = 81;
    int v4 = 57;
    int v5 = 79;
    int v6 = 85;
    int i;
    if (v6 > v2) { v6 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
