int test_func(void) {
    int v0 = 37;
    int v1 = 70;
    int v2 = 28;
    int v3 = 68;
    int v4 = 59;
    int v5 = 6;
    int v6 = 78;
    int i;
    if (v1 > v2) { v1 = v2; }
    v4 = v4 + v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
