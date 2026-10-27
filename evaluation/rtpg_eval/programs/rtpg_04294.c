int __arr_4294[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 60;
    int v2 = 36;
    int v3 = 62;
    int v4 = 23;
    int v5 = 56;
    int i;
    for (i = 0; i < 10; i++) { __arr_4294[i] = v1 + i; }
    for (i = 0; i < 15; i++) {
        v3 = v3 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
