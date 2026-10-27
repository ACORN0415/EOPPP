int test_func(void) {
    int v0 = 68;
    int v1 = 44;
    int v2 = 17;
    int v3 = 82;
    int v4 = 67;
    int v5 = 97;
    int v6 = 72;
    int v7 = 75;
    int i;
    v3 = v3 - v6;
    v3 = v3 + v2;
    v7 = 57;
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
