int test_func(void) {
    int v0 = 51;
    int v1 = 90;
    int v2 = 29;
    int v3 = 79;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v0 = v0 & v3;
    return v0;
}
int main(void) { return test_func(); }
