int __arr_5112[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 8;
    int v2 = 26;
    int v3 = 51;
    int v4 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_5112[i] = v0 + i; }
    v2 = v2 + v0;
    v1 = v1 * 5;
    return v0;
}
int main(void) { return test_func(); }
