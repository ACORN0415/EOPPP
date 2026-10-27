int __arr_9797[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 9;
    int v2 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_9797[i] = v1 + i; }
    v1 = 12;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
