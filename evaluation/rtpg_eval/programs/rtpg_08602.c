int test_func(void) {
    int v0 = 94;
    int v1 = 26;
    int v2 = 57;
    int v3 = 6;
    int v4 = 93;
    int v5 = 77;
    int i;
    v3 = 90;
    int *__p = &v4;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
