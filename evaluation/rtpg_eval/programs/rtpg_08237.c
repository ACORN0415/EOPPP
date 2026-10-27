int test_func(void) {
    int v0 = 63;
    int v1 = 18;
    int v2 = 36;
    int v3 = 43;
    int v4 = 97;
    int v5 = 78;
    int v6 = 43;
    int i;
    v6 = v6 + v6;
    v1 = v1 - v0;
    if (v1 > v3) { v1 = v3; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
