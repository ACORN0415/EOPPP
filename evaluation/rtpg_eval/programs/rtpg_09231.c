int test_func(void) {
    int v0 = 11;
    int v1 = 6;
    int v2 = 5;
    int v3 = 14;
    int v4 = 25;
    int v5 = 28;
    int v6 = 27;
    int i;
    v3 = v3 * 8;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v5;
    }
    v6 = v6 - v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
