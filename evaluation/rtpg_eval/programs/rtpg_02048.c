int test_func(void) {
    int v0 = 44;
    int v1 = 24;
    int v2 = 66;
    int v3 = 23;
    int v4 = 47;
    int v5 = 17;
    int v6 = 68;
    int v7 = 21;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    v0 = v0 & v3;
    return v0;
}
int main(void) { return test_func(); }
