int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 25;
    int v1 = 64;
    int v2 = 39;
    int v3 = 74;
    int i;
    if (v0 > v0) { v0 = v0; }
    for (i = 0; i < 9; i++) {
        v2 = v2 + v3;
    }
    v0 = 84;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
