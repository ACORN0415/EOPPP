int test_func(void) {
    int v0 = 81;
    int v1 = 31;
    int v2 = 85;
    int v3 = 74;
    int v4 = 80;
    int v5 = 19;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v5;
    }
    v3 = v3 + v4;
    v5 = 95;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
