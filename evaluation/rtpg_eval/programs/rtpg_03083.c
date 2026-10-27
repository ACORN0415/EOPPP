int test_func(void) {
    int v0 = 59;
    int v1 = 64;
    int v2 = 95;
    int v3 = 4;
    int v4 = 80;
    int v5 = 73;
    int v6 = 47;
    int v7 = 29;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v6;
    }
    v6 = v6 + v4;
    return v0;
}
int main(void) { return test_func(); }
