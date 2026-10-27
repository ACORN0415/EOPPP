int __arr_154[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 32;
    int v2 = 87;
    int v3 = 44;
    int i;
    if (v2 > v3) { v2 = v3; }
    v1 = 20;
    for (i = 0; i < 10; i++) { __arr_154[i] = v0 + i; }
    v0 = v0 ^ v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
