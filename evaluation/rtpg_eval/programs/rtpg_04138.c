int __arr_4138[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 89;
    int v2 = 44;
    int v3 = 18;
    int v4 = 62;
    int v5 = 18;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_4138[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
