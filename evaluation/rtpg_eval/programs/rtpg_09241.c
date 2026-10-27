int __arr_9241[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 55;
    int v2 = 89;
    int v3 = 52;
    int v4 = 63;
    int v5 = 77;
    int v6 = 28;
    int i;
    for (i = 0; i < 10; i++) { __arr_9241[i] = v4 + i; }
    if (v4 > v3) { v4 = v3; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
