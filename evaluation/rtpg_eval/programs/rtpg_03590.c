int test_func(void) {
    int v0 = 71;
    int v1 = 98;
    int v2 = 84;
    int v3 = 44;
    int v4 = 54;
    int v5 = 71;
    int v6 = 42;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v6;
    }
    v5 = v5 * 6;
    v2 = v2 - v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
