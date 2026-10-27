int test_func(void) {
    int v0 = 14;
    int v1 = 21;
    int v2 = 52;
    int v3 = 75;
    int v4 = 48;
    int v5 = 78;
    int v6 = 58;
    int v7 = 32;
    int i;
    v3 = 76;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
