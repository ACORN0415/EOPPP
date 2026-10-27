int test_func(void) {
    int v0 = 4;
    int v1 = 38;
    int v2 = 57;
    int i;
    v0 = 19;
    v0 = v0 * 9;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
