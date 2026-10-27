int test_func(void) {
    int v0 = 96;
    int v1 = 85;
    int v2 = 48;
    int v3 = 47;
    int v4 = 41;
    int v5 = 0;
    int v6 = 50;
    int v7 = 58;
    int i;
    v4 = v4 - v7;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v4;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
