int __arr_9057[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 58;
    int v2 = 55;
    int v3 = 17;
    int v4 = 26;
    int v5 = 89;
    int i;
    for (i = 0; i < 10; i++) { __arr_9057[i] = v1 + i; }
    for (i = 0; i < 7; i++) {
        v4 = v4 + v4;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
