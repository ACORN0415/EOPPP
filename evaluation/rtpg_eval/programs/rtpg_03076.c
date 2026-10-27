int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 33;
    int v1 = 93;
    int v2 = 5;
    int v3 = 42;
    int v4 = 82;
    int i;
    v1 = v1 + v2;
    v4 = 33;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
