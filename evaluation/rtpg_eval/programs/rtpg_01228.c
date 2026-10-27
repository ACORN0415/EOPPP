int __arr_1228[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 82;
    int v2 = 23;
    int v3 = 16;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_1228[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
