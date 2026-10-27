int test_func(void) {
    int v0 = 59;
    int v1 = 51;
    int v2 = 78;
    int v3 = 56;
    int i;
    v1 = 59;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v3;
    }
    v2 = v2 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
