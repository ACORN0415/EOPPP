int test_func(void) {
    int v0 = 20;
    int v1 = 81;
    int v2 = 90;
    int v3 = 20;
    int v4 = 7;
    int v5 = 32;
    int v6 = 24;
    int i;
    v4 = 99;
    v3 = v3 - v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
