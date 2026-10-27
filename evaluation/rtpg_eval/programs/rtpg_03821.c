int test_func(void) {
    int v0 = 81;
    int v1 = 62;
    int v2 = 63;
    int v3 = 78;
    int v4 = 12;
    int v5 = 18;
    int v6 = 84;
    int i;
    for (i = 0; i < 17; i++) {
        v6 = v6 + v2;
    }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
