int __arr_578[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 9;
    int v2 = 53;
    int v3 = 56;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v2;
    }
    v3 = v3 - v2;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 10; i++) { __arr_578[i] = v3 + i; }
    return v0;
}
int main(void) { return test_func(); }
