int __arr_900[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 74;
    int v2 = 92;
    int v3 = 46;
    int v4 = 98;
    int v5 = 66;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 10; i++) { __arr_900[i] = v3 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
