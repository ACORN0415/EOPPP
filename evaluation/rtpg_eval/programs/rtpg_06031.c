int __arr_6031[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 86;
    int v2 = 60;
    int v3 = 12;
    int v4 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_6031[i] = v4 + i; }
    for (i = 0; i < 14; i++) {
        v4 = v4 + v0;
    }
    v0 = v0 - v3;
    return v0;
}
int main(void) { return test_func(); }
