int __arr_7512[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 24;
    int v2 = 13;
    int v3 = 49;
    int v4 = 94;
    int v5 = 34;
    int v6 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_7512[i] = v4 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
