int __arr_9153[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 78;
    int v2 = 87;
    int i;
    v2 = v2 - v0;
    v0 = 62;
    for (i = 0; i < 10; i++) { __arr_9153[i] = v1 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
