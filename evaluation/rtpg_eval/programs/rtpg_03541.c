int __arr_3541[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 90;
    int v2 = 58;
    int v3 = 89;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 10; i++) { __arr_3541[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
