int __arr_6017[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 34;
    int v2 = 77;
    int v3 = 58;
    int v4 = 8;
    int v5 = 87;
    int v6 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_6017[i] = v4 + i; }
    for (i = 0; i < 14; i++) {
        v4 = v4 + v2;
    }
    v4 = v4 + v1;
    return v0;
}
int main(void) { return test_func(); }
