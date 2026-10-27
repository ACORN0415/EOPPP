int __arr_1019[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 0;
    int v2 = 26;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 10; i++) { __arr_1019[i] = v2 + i; }
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
