int __arr_3746[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 44;
    int v2 = 21;
    int v3 = 1;
    int v4 = 26;
    int v5 = 40;
    int i;
    for (i = 0; i < 10; i++) { __arr_3746[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
