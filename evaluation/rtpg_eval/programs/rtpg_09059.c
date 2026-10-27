int __arr_9059[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 64;
    int v2 = 35;
    int v3 = 50;
    int v4 = 48;
    int i;
    if (v3 > v3) { v3 = v3; }
    for (i = 0; i < 10; i++) { __arr_9059[i] = v2 + i; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
