int test_func(void) {
    int v0 = 8;
    int v1 = 12;
    int v2 = 17;
    int v3 = 1;
    int i;
    v2 = v2 + v0;
    v2 = v2 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
