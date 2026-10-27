int test_func(void) {
    int v0 = 44;
    int v1 = 77;
    int v2 = 40;
    int v3 = 36;
    int i;
    v0 = v0 - v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
