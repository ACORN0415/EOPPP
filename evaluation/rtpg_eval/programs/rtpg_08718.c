int test_func(void) {
    int v0 = 23;
    int v1 = 14;
    int v2 = 19;
    int v3 = 37;
    int v4 = 70;
    int v5 = 34;
    int v6 = 34;
    int i;
    v6 = v6 + v6;
    v2 = 87;
    v2 = v2 - v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
