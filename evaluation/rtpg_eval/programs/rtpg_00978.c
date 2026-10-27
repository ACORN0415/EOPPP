int __arr_978[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 100;
    int v2 = 31;
    int i;
    v0 = 49;
    for (i = 0; i < 10; i++) { __arr_978[i] = v0 + i; }
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
