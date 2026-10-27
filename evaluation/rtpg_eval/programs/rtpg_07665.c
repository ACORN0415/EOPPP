int test_func(void) {
    int v0 = 79;
    int v1 = 95;
    int v2 = 75;
    int v3 = 25;
    int i;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v1;
    }
    v1 = v1 * 10;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
