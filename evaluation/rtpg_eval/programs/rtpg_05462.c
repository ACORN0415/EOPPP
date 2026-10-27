int test_func(void) {
    int v0 = 92;
    int v1 = 0;
    int v2 = 4;
    int v3 = 41;
    int v4 = 46;
    int v5 = 35;
    int v6 = 45;
    int i;
    v4 = v4 - v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__p = &v1;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
