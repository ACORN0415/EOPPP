int test_func(void) {
    int v0 = 56;
    int v1 = 35;
    int v2 = 71;
    int i;
    v1 = v1 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
