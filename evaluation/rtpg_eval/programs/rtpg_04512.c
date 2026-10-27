int test_func(void) {
    int v0 = 68;
    int v1 = 57;
    int v2 = 37;
    int v3 = 18;
    int v4 = 21;
    int v5 = 59;
    int v6 = 90;
    int v7 = 70;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v5;
    }
    v4 = v4 + v6;
    if (v6 > v2) { v6 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
