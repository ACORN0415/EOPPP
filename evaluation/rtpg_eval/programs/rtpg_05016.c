int __arr_5016[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 82;
    int v2 = 5;
    int v3 = 18;
    int i;
    v3 = v3 * 7;
    for (i = 0; i < 10; i++) { __arr_5016[i] = v3 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
