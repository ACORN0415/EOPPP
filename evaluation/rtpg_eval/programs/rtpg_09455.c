int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 22;
    int v1 = 81;
    int v2 = 24;
    int v3 = 57;
    int v4 = 45;
    int v5 = 36;
    int v6 = 94;
    int v7 = 40;
    int i;
    v7 = v7 + v1;
    if (v4 > v1) { v4 = v1; }
    v2 = __helper(v2);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
