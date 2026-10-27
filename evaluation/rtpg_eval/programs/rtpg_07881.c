int test_func(void) {
    int v0 = 68;
    int v1 = 6;
    int v2 = 85;
    int i;
    if (v2 > v2) { v2 = v2; }
    v1 = v1 * 4;
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
