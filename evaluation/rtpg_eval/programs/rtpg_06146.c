int test_func(void) {
    int v0 = 32;
    int v1 = 3;
    int v2 = 79;
    int v3 = 48;
    int v4 = 32;
    int v5 = 83;
    int v6 = 48;
    int i;
    if (v1 > v1) { v1 = v1; }
    v6 = 52;
    v6 = v6 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
