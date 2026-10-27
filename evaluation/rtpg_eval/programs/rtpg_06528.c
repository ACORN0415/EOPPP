int test_func(void) {
    int v0 = 66;
    int v1 = 17;
    int v2 = 84;
    int v3 = 46;
    int v4 = 85;
    int i;
    if (v2 > v2) { v2 = v2; }
    v4 = 35;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
