int __arr_5448[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 85;
    int v2 = 59;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 10; i++) { __arr_5448[i] = v1 + i; }
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
