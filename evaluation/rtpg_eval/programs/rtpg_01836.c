int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 92;
    int v1 = 94;
    int v2 = 74;
    int v3 = 48;
    int v4 = 33;
    int v5 = 51;
    int v6 = 81;
    int i;
    v0 = v0 - v3;
    v5 = 34;
    v0 = v0 * 8;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
