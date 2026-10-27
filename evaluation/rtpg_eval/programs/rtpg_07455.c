int __arr_7455[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 26;
    int v2 = 23;
    int v3 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_7455[i] = v0 + i; }
    v0 = v0 - v2;
    v0 = 31;
    return v0;
}
int main(void) { return test_func(); }
