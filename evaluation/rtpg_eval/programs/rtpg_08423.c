int __arr_8423[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 9;
    int v2 = 78;
    int v3 = 13;
    int i;
    v2 = 48;
    for (i = 0; i < 10; i++) { __arr_8423[i] = v1 + i; }
    v1 = v1 - v0;
    if (v3 > v2) { v3 = v2; }
    return v0;
}
int main(void) { return test_func(); }
