int __arr_8638[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 31;
    int v2 = 44;
    int v3 = 2;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 10; i++) { __arr_8638[i] = v1 + i; }
    v0 = v0 & v3;
    return v0;
}
int main(void) { return test_func(); }
