int __arr_5452[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 74;
    int v2 = 98;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_5452[i] = v0 + i; }
    v2 = v2 + v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
