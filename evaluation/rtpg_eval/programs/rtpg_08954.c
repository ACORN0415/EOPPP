int __arr_8954[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 88;
    int v2 = 70;
    int v3 = 37;
    int v4 = 44;
    int v5 = 60;
    int v6 = 46;
    int i;
    for (i = 0; i < 10; i++) { __arr_8954[i] = v2 + i; }
    v2 = 31;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
