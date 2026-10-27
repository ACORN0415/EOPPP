int __arr_2536[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 51;
    int v2 = 47;
    int v3 = 13;
    int v4 = 68;
    int v5 = 7;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 10; i++) { __arr_2536[i] = v5 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
