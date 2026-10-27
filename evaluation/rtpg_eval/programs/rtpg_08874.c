int test_func(void) {
    int v0 = 75;
    int v1 = 47;
    int v2 = 66;
    int v3 = 53;
    int i;
    v1 = v1 - v3;
    v1 = 63;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v0 = v0 / (v2 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
