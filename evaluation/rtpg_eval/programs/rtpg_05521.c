int __arr_5521[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 31;
    int v2 = 39;
    int v3 = 3;
    int v4 = 54;
    int v5 = 64;
    int i;
    for (i = 0; i < 10; i++) { __arr_5521[i] = v2 + i; }
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
