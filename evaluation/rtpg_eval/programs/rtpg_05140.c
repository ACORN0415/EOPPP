int test_func(void) {
    int v0 = 94;
    int v1 = 91;
    int v2 = 8;
    int i;
    v0 = v0 - v2;
    v0 = v0 + v0;
    if (v1 > v0) { v1 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
