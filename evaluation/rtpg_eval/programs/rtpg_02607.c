int __arr_2607[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 96;
    int v2 = 16;
    int v3 = 9;
    int v4 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_2607[i] = v4 + i; }
    for (i = 0; i < 19; i++) {
        v3 = v3 + v0;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
