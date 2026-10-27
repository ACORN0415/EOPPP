int __arr_9082[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 76;
    int v2 = 19;
    int v3 = 53;
    int v4 = 87;
    int v5 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_9082[i] = v1 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
