int __arr_2557[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 26;
    int v2 = 85;
    int i;
    if (v2 > v1) { v2 = v1; }
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_2557[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
