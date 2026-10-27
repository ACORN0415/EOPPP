int test_func(void) {
    int v0 = 94;
    int v1 = 34;
    int v2 = 60;
    int v3 = 89;
    int i;
    if (v1 > v1) { v1 = v1; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
