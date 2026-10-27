int __arr_5863[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 63;
    int v2 = 91;
    int v3 = 31;
    int v4 = 36;
    int v5 = 89;
    int v6 = 61;
    int v7 = 52;
    int i;
    for (i = 0; i < 10; i++) { __arr_5863[i] = v2 + i; }
    for (i = 0; i < 11; i++) {
        v2 = v2 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
