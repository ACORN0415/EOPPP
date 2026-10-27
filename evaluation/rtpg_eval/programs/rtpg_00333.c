int test_func(void) {
    int v0 = 3;
    int v1 = 19;
    int v2 = 35;
    int v3 = 58;
    int v4 = 47;
    int i;
    if (v2 > v0) { v2 = v0; }
    v1 = 71;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    v2 = v2 / (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
