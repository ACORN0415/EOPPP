int test_func(void) {
    int v0 = 48;
    int v1 = 53;
    int v2 = 7;
    int v3 = 98;
    int v4 = 29;
    int v5 = 14;
    int v6 = 55;
    int v7 = 19;
    int i;
    if (v0 > v7) { v0 = v7; }
    v0 = 78;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
