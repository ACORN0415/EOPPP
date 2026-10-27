int __arr_5954[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 11;
    int v2 = 46;
    int v3 = 99;
    int i;
    for (i = 0; i < 10; i++) { __arr_5954[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
