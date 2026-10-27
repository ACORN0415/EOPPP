int test_func(void) {
    int v0 = 46;
    int v1 = 60;
    int v2 = 90;
    int v3 = 5;
    int i;
    v1 = v1 + v0;
    v1 = 82;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
