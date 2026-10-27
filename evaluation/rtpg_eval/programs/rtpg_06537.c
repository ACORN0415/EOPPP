int test_func(void) {
    int v0 = 91;
    int v1 = 77;
    int v2 = 34;
    int v3 = 32;
    int v4 = 59;
    int v5 = 50;
    int v6 = 68;
    int i;
    v0 = v0 * 4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
