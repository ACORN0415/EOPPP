int __arr_5363[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 43;
    int v2 = 30;
    int v3 = 5;
    int v4 = 94;
    int i;
    v4 = v4 - v1;
    for (i = 0; i < 10; i++) { __arr_5363[i] = v1 + i; }
    for (i = 0; i < 7; i++) {
        v2 = v2 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
