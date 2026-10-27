int __arr_7054[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 80;
    int v2 = 60;
    int v3 = 79;
    int v4 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_7054[i] = v1 + i; }
    if (v3 > v2) { v3 = v2; }
    v2 = v2 + v3;
    return v0;
}
int main(void) { return test_func(); }
