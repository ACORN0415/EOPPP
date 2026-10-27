int __arr_5194[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 39;
    int v2 = 27;
    int i;
    for (i = 0; i < 10; i++) { __arr_5194[i] = v1 + i; }
    v1 = v1 * 4;
    v1 = 49;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
