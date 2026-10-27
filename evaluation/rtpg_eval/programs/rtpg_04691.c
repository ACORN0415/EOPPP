int __arr_4691[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 94;
    int v2 = 74;
    int v3 = 89;
    int v4 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_4691[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
