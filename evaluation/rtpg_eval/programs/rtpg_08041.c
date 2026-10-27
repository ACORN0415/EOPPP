int test_func(void) {
    int v0 = 11;
    int v1 = 44;
    int v2 = 17;
    int i;
    v1 = v1 * 2;
    if (v0 > v2) { v0 = v2; }
    v2 = v2 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v1 = v1 & v2;
    return v0;
}
int main(void) { return test_func(); }
