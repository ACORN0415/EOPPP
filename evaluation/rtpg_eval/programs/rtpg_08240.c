int test_func(void) {
    int v0 = 21;
    int v1 = 36;
    int v2 = 72;
    int v3 = 63;
    int v4 = 94;
    int i;
    v2 = v2 + v4;
    v0 = v0 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
