int __arr_4930[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 51;
    int v2 = 73;
    int v3 = 88;
    int i;
    for (i = 0; i < 10; i++) { __arr_4930[i] = v0 + i; }
    if (v0 > v2) { v0 = v2; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
