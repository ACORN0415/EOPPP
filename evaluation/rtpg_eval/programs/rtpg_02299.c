int test_func(void) {
    int v0 = 24;
    int v1 = 29;
    int v2 = 8;
    int v3 = 22;
    int v4 = 73;
    int i;
    v0 = v0 + v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
