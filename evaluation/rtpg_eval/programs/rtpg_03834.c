int test_func(void) {
    int v0 = 5;
    int v1 = 33;
    int v2 = 47;
    int v3 = 0;
    int v4 = 7;
    int v5 = 26;
    int v6 = 82;
    int v7 = 96;
    int i;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v1;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
