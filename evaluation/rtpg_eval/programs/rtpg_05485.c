int __arr_5485[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 35;
    int v2 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_5485[i] = v2 + i; }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
