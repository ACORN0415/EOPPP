int test_func(void) {
    int v0 = 21;
    int v1 = 84;
    int v2 = 37;
    int v3 = 84;
    int v4 = 96;
    int v5 = 23;
    int v6 = 6;
    int v7 = 52;
    int i;
    v1 = 9;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    int *__p = &v4;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
