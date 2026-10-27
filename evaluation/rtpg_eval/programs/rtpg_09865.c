int test_func(void) {
    int v0 = 95;
    int v1 = 95;
    int v2 = 11;
    int v3 = 16;
    int v4 = 78;
    int v5 = 7;
    int v6 = 51;
    int i;
    v6 = v6 + v3;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
