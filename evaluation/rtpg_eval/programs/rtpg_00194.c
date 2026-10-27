int test_func(void) {
    int v0 = 1;
    int v1 = 24;
    int v2 = 51;
    int v3 = 60;
    int i;
    v3 = 4;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
