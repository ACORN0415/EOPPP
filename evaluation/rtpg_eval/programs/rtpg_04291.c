int __arr_4291[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 60;
    int v2 = 85;
    int v3 = 39;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_4291[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
