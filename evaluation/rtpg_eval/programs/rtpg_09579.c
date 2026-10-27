int __arr_9579[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 36;
    int v2 = 35;
    int v3 = 54;
    int v4 = 69;
    int v5 = 85;
    int v6 = 76;
    int v7 = 76;
    int i;
    for (i = 0; i < 10; i++) { __arr_9579[i] = v7 + i; }
    v5 = v5 + v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
