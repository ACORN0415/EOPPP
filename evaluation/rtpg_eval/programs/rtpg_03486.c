int __arr_3486[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 15;
    int v2 = 1;
    int v3 = 92;
    int v4 = 96;
    int v5 = 2;
    int i;
    v5 = v5 + v0;
    for (i = 0; i < 10; i++) { __arr_3486[i] = v2 + i; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
