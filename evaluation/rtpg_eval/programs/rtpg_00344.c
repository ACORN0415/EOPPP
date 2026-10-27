int __arr_344[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 68;
    int v2 = 44;
    int i;
    v2 = v2 * 9;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 10; i++) { __arr_344[i] = v1 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
