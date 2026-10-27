int test_func(void) {
    int v0 = 20;
    int v1 = 6;
    int v2 = 30;
    int v3 = 12;
    int v4 = 0;
    int i;
    v0 = 88;
    v0 = v0 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
