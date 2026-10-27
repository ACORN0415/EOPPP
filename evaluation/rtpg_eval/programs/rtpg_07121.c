int __arr_7121[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 81;
    int v2 = 76;
    int v3 = 39;
    int v4 = 46;
    int i;
    for (i = 0; i < 10; i++) { __arr_7121[i] = v0 + i; }
    v1 = v1 - v4;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
