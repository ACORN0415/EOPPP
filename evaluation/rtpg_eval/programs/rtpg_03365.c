int test_func(void) {
    int v0 = 90;
    int v1 = 44;
    int v2 = 45;
    int i;
    v0 = v0 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v0 = v0 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
