int test_func(void) {
    int v0 = 60;
    int v1 = 13;
    int v2 = 69;
    int v3 = 27;
    int v4 = 62;
    int v5 = 78;
    int v6 = 11;
    int v7 = 48;
    int i;
    if (v1 > v1) { v1 = v1; }
    v1 = v1 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
