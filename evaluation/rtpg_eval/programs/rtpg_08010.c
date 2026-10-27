int __arr_8010[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 96;
    int v2 = 9;
    int v3 = 3;
    int v4 = 13;
    int i;
    v2 = v2 - v1;
    v4 = 34;
    for (i = 0; i < 10; i++) { __arr_8010[i] = v2 + i; }
    for (i = 0; i < 17; i++) {
        v4 = v4 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
