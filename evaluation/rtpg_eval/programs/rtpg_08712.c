int test_func(void) {
    int v0 = 66;
    int v1 = 44;
    int v2 = 18;
    int v3 = 81;
    int v4 = 62;
    int i;
    v4 = 87;
    v3 = v3 + v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
