int __arr_8008[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 45;
    int v2 = 37;
    int v3 = 66;
    int v4 = 27;
    int v5 = 9;
    int i;
    v2 = 24;
    v3 = v3 - v5;
    for (i = 0; i < 10; i++) { __arr_8008[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
