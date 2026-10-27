int test_func(void) {
    int v0 = 57;
    int v1 = 1;
    int v2 = 82;
    int v3 = 54;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v3;
    }
    v0 = 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
