int test_func(void) {
    int v0 = 2;
    int v1 = 9;
    int v2 = 57;
    int v3 = 95;
    int v4 = 33;
    int v5 = 29;
    int i;
    if (v3 > v2) { v3 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
