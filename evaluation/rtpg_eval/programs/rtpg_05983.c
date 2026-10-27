int __arr_5983[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 99;
    int v2 = 5;
    int v3 = 4;
    int v4 = 27;
    int v5 = 54;
    int i;
    for (i = 0; i < 10; i++) { __arr_5983[i] = v0 + i; }
    v3 = v3 + v2;
    v2 = 76;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
