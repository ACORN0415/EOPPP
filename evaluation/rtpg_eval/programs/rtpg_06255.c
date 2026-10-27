int test_func(void) {
    int v0 = 14;
    int v1 = 53;
    int v2 = 81;
    int v3 = 25;
    int i;
    v3 = v3 - v0;
    v3 = v3 | v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
