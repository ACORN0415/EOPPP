int test_func(void) {
    int v0 = 84;
    int v1 = 81;
    int v2 = 29;
    int v3 = 78;
    int v4 = 15;
    int v5 = 70;
    int v6 = 73;
    int i;
    v3 = v3 - v4;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v6;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
