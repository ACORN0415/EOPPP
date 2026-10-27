int __arr_830[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 56;
    int v2 = 84;
    int v3 = 84;
    int v4 = 86;
    int v5 = 41;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 10; i++) { __arr_830[i] = v1 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
