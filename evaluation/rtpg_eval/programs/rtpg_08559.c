int __arr_8559[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 97;
    int v2 = 33;
    int v3 = 73;
    int v4 = 74;
    int v5 = 96;
    int v6 = 69;
    int v7 = 90;
    int i;
    for (i = 0; i < 10; i++) { __arr_8559[i] = v1 + i; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v5;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
