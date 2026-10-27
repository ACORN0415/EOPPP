int test_func(void) {
    int v0 = 5;
    int v1 = 94;
    int v2 = 53;
    int v3 = 1;
    int v4 = 98;
    int v5 = 70;
    int v6 = 48;
    int v7 = 15;
    int i;
    v5 = 90;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
