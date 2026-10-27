int __arr_1878[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 24;
    int v2 = 54;
    int v3 = 99;
    int v4 = 35;
    int v5 = 82;
    int v6 = 52;
    int i;
    for (i = 0; i < 10; i++) { __arr_1878[i] = v4 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
