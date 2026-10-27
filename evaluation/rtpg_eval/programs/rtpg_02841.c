int __arr_2841[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 80;
    int v2 = 90;
    int v3 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_2841[i] = v2 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
