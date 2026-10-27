int test_func(void) {
    int v0 = 67;
    int v1 = 42;
    int v2 = 44;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v2;
    }
    v1 = 82;
    v2 = v2 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
