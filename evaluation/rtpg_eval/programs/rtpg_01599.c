int __arr_1599[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 5;
    int v2 = 88;
    int v3 = 3;
    int v4 = 22;
    int i;
    v0 = 83;
    v1 = v1 - v2;
    for (i = 0; i < 10; i++) { __arr_1599[i] = v1 + i; }
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
