int __arr_2879[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 85;
    int v2 = 62;
    int v3 = 43;
    int v4 = 70;
    int v5 = 77;
    int v6 = 51;
    int v7 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_2879[i] = v2 + i; }
    v3 = 27;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
