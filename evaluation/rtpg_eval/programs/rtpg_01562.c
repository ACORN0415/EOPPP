int test_func(void) {
    int v0 = 95;
    int v1 = 74;
    int v2 = 64;
    int v3 = 58;
    int v4 = 51;
    int v5 = 48;
    int v6 = 56;
    int v7 = 26;
    int i;
    if (v1 > v0) { v1 = v0; }
    v1 = v1 + v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
