int test_func(void) {
    int v0 = 62;
    int v1 = 66;
    int v2 = 47;
    int v3 = 63;
    int v4 = 32;
    int v5 = 74;
    int v6 = 60;
    int v7 = 44;
    int i;
    v4 = v4 - v2;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v5;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
