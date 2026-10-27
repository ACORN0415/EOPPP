int test_func(void) {
    int v0 = 80;
    int v1 = 68;
    int v2 = 59;
    int v3 = 40;
    int v4 = 15;
    int v5 = 91;
    int v6 = 42;
    int v7 = 47;
    int i;
    v4 = v4 * 9;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v4;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
