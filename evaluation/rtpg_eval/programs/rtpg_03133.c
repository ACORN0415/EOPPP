int __arr_3133[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 13;
    int v2 = 60;
    int i;
    v2 = v2 * 8;
    for (i = 0; i < 10; i++) { __arr_3133[i] = v2 + i; }
    v0 = 98;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
